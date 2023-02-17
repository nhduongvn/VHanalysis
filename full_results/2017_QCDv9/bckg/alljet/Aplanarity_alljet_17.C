#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_17()
{
//=========Macro generated from canvas: Aplanarity_alljet_17/Aplanarity_alljet_17
//=========  (Thu Feb 16 10:35:36 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_17 = new TCanvas("Aplanarity_alljet_17", "Aplanarity_alljet_17",0,0,600,600);
   Aplanarity_alljet_17->SetHighLightColor(2);
   Aplanarity_alljet_17->Range(-0.2183529,-2.175253e+11,1.171633,1.595185e+12);
   Aplanarity_alljet_17->SetFillColor(0);
   Aplanarity_alljet_17->SetFillStyle(4000);
   Aplanarity_alljet_17->SetBorderMode(0);
   Aplanarity_alljet_17->SetBorderSize(2);
   Aplanarity_alljet_17->SetLeftMargin(0.15709);
   Aplanarity_alljet_17->SetRightMargin(0.1234783);
   Aplanarity_alljet_17->SetBottomMargin(0.12);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.413914e+12);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(0);
   st_stack_254->SetMaximum(1.413914e+12);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetTitle("Aplanarity");
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetTitleOffset(1);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Events/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetTitleSize(0.037);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetTitleOffset(1);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,43628.7);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,9.425934e+11);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,7.270689e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,2.636948e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.271423e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,7.030997e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,4.170171e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,2.610603e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,1.668102e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,1.096154e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,7.216863e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,4.732226e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,3.114095e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,2.075361e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.345498e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,8.365916e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,5.330845e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,3.184255e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,1.731993e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,9399489);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,4952001);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,1988747);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,719527.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,286452.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,25384.12);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,22902.78);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.27606e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,3.499717e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,2.101185e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,1.457075e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,1.08366e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,8346713);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,6609224);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,5283274);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,4288730);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,3476679);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,2817138);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,2285449);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,1868344);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,1503856);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1188070);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,949215.5);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,732555.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,537060.3);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,397526.7);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,291055.9);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,182208.6);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,108822.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,70330.9);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,20123.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(2.581078e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,1.491927);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,1.60051e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,6835942);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,4083755);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,2685160);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,1851887);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1309642);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,940231.4);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,678909.3);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,491389.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,354429.4);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,253975.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,179872.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,125812.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,86026.65);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,57419.15);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,37222.03);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,23155.37);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,13647.87);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,7566.064);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,3828.005);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,1694.855);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,624.5894);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,164.449);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,29.13746);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,0.9123597);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.3192974);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,1032.233);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,688.4754);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,535.2079);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,435.1028);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,361.8673);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,304.5904);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,258.2699);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,219.5523);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,186.8794);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,158.7627);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,134.4454);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,113.1447);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,94.67133);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,78.28657);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,63.97458);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,51.53583);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,40.63772);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,31.1971);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,23.24709);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,16.52421);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,10.99582);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,6.658865);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,3.432295);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.460979);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.2444669);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(5.886504e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_17->Modified();
   Aplanarity_alljet_17->cd();
   Aplanarity_alljet_17->SetSelected(Aplanarity_alljet_17);
}
