#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_17_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_17/Aplanarity_seljet_17
//=========  (Tue Feb 14 16:02:06 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_17 = new TCanvas("Aplanarity_seljet_17", "Aplanarity_seljet_17",0,0,600,600);
   Aplanarity_seljet_17->SetHighLightColor(2);
   Aplanarity_seljet_17->Range(-0.2183529,-1.689956,1.171633,13.97769);
   Aplanarity_seljet_17->SetFillColor(0);
   Aplanarity_seljet_17->SetFillStyle(4000);
   Aplanarity_seljet_17->SetBorderMode(0);
   Aplanarity_seljet_17->SetBorderSize(2);
   Aplanarity_seljet_17->SetLogy();
   Aplanarity_seljet_17->SetLeftMargin(0.15709);
   Aplanarity_seljet_17->SetRightMargin(0.1234783);
   Aplanarity_seljet_17->SetBottomMargin(0.12);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8.096106e+11);
   
   TH1F *st_stack_318 = new TH1F("st_stack_318","",50,0,1);
   st_stack_318->SetMinimum(1.549394);
   st_stack_318->SetMaximum(2.575902e+12);
   st_stack_318->SetDirectory(0);
   st_stack_318->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_318->SetLineColor(ci);
   st_stack_318->GetXaxis()->SetTitle("Aplanarity");
   st_stack_318->GetXaxis()->SetRange(1,50);
   st_stack_318->GetXaxis()->SetLabelFont(42);
   st_stack_318->GetXaxis()->SetTitleOffset(1);
   st_stack_318->GetXaxis()->SetTitleFont(42);
   st_stack_318->GetYaxis()->SetTitle("Events/0.02");
   st_stack_318->GetYaxis()->SetLabelFont(42);
   st_stack_318->GetYaxis()->SetTitleSize(0.037);
   st_stack_318->GetYaxis()->SetTitleFont(42);
   st_stack_318->GetZaxis()->SetLabelFont(42);
   st_stack_318->GetZaxis()->SetTitleOffset(1);
   st_stack_318->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_318);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,84.60191);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,8.089901e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,3.981734e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,2.078031e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,1.173994e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,7.076148e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,4.404105e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,2.812347e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,1.863724e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,1.240577e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,8.262672e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,5.502104e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,3.630935e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,2.479057e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,1.603078e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,9476584);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,6093162);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,4020495);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,2038903);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,1115247);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,533358.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,239301.6);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,73197.13);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,36026.3);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,3397.398);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,30.95152);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,6720778);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,5091686);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,3770625);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,2852725);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,2233931);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,1763283);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,1400571);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,1150978);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,950903.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,768868);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,625380.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,504340.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,427996.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,340595.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,256073.6);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,205069.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,184303.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,116666.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,87961.37);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,61444.77);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,37858.74);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,15360.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,19536.16);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,2090.024);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(7.180466e+07);

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
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,1.341652);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,6204783);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,4851085);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,3301133);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,2269584);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,1593708);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,1136186);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,818696.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,591993.4);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,428660.9);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,309149.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,221579.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,156819.8);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,109587.4);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,74991.51);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,49985.23);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,32379.92);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,20131.68);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,11821.98);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,6552.167);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,3319.343);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,1467.963);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,534.8637);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,145.8331);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,24.80671);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.9246293);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.2925337);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,660.195);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,589.4366);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,487.9168);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,405.1733);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,339.803);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,287.0749);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,243.8041);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,207.3849);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,176.5537);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,149.9672);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,127.0174);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,106.8627);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,89.37195);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,73.93419);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,60.38096);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,48.63188);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,38.32966);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,29.37973);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,21.8794);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,15.57025);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,10.35423);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,6.241801);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,3.264532);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,1.37281);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.2539886);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(3.421877e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_17->Modified();
   Aplanarity_seljet_17->cd();
   Aplanarity_seljet_17->SetSelected(Aplanarity_seljet_17);
}
