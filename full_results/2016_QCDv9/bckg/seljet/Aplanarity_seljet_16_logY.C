#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_16_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_16/Aplanarity_seljet_16
//=========  (Thu Feb 16 10:37:43 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_16 = new TCanvas("Aplanarity_seljet_16", "Aplanarity_seljet_16",0,0,600,600);
   Aplanarity_seljet_16->SetHighLightColor(2);
   Aplanarity_seljet_16->Range(-0.2183529,-1.519185,1.171633,12.9752);
   Aplanarity_seljet_16->SetFillColor(0);
   Aplanarity_seljet_16->SetFillStyle(4000);
   Aplanarity_seljet_16->SetBorderMode(0);
   Aplanarity_seljet_16->SetBorderSize(2);
   Aplanarity_seljet_16->SetLogy();
   Aplanarity_seljet_16->SetLeftMargin(0.15709);
   Aplanarity_seljet_16->SetRightMargin(0.1234783);
   Aplanarity_seljet_16->SetBottomMargin(0.12);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.114993e+11);
   
   TH1F *st_stack_317 = new TH1F("st_stack_317","",50,0,1);
   st_stack_317->SetMinimum(1.660127);
   st_stack_317->SetMaximum(3.355519e+11);
   st_stack_317->SetDirectory(0);
   st_stack_317->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_317->SetLineColor(ci);
   st_stack_317->GetXaxis()->SetTitle("Aplanarity");
   st_stack_317->GetXaxis()->SetRange(1,50);
   st_stack_317->GetXaxis()->SetLabelFont(42);
   st_stack_317->GetXaxis()->SetTitleOffset(1);
   st_stack_317->GetXaxis()->SetTitleFont(42);
   st_stack_317->GetYaxis()->SetTitle("Events/0.02");
   st_stack_317->GetYaxis()->SetLabelFont(42);
   st_stack_317->GetYaxis()->SetTitleSize(0.037);
   st_stack_317->GetYaxis()->SetTitleFont(42);
   st_stack_317->GetZaxis()->SetLabelFont(42);
   st_stack_317->GetZaxis()->SetTitleOffset(1);
   st_stack_317->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_317);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,390.1154);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,1.11231e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,5.600939e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,2.964479e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,1.692782e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,1.017071e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,6.443527e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,4.11441e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,2.755739e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,1.840388e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,1.241875e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,8392957);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,5752155);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,3704404);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,2358298);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,1454890);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,969257.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,582983.3);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,306542.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,159303.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,86078.05);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,37874.66);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,10376.29);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,4701.17);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,2018.04);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,352.5945);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,1376014);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,1028368);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,777323.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,592899.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,452044);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,361697.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,286726.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,238867.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,199543.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,162157.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,137169.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,133831.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,80349.12);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,64907.74);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,58664.11);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,49940.49);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,42642.6);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,16332.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,11527.85);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,8529.93);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,6017.264);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,3038.603);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,2151.057);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,1965.799);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(3.879266e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,0.4568616);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,2682681);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,2103734);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,1426009);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,972957.7);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,678047.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,481377.6);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,344965.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,248901.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,180108);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,129679.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,92656.21);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,65509.64);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,45789.62);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,31293.68);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,20868.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,13470.26);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,8406.567);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,4993.678);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,2757.285);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,1407.595);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,618.5102);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,234.0915);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,60.10356);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,9.830048);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.2458012);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.1833555);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,434.9829);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,387.1507);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,319.4972);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,264.2378);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,220.775);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,186.1549);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,157.6748);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,133.9907);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,114.0359);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,96.79653);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,81.8489);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,68.84911);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,57.57178);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,47.61098);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,38.89075);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,31.25919);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,24.7);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,19.04351);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,14.15024);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,10.11813);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,6.700342);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,4.12209);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,2.091225);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,0.8473797);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.1421689);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(1.410885e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_16->Modified();
   Aplanarity_seljet_16->cd();
   Aplanarity_seljet_16->SetSelected(Aplanarity_seljet_16);
}
