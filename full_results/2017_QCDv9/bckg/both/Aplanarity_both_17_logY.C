#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Wed Jan 18 11:42:54 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2183529,-1.217354,1.171633,11.23871);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15709);
   Aplanarity_both_17->SetRightMargin(0.1234783);
   Aplanarity_both_17->SetBottomMargin(0.12);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.629252e+09);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(1.893972);
   st_stack_190->SetMaximum(9.842399e+09);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("Aplanarity");
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,3.528783e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1.744986e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,9721522);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,5118310);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,2845277);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,1841970);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,1387023);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,727293.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,538121.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,349847.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,322441.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,155038.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,115402.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,59832.97);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,28311.66);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,59038.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,19014.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5782.643);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,2214.029);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,1881.823);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,437.3666);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,478296.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,373480.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,291839.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,205977.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,144289.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,117247.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,114015.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,71214.31);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,67795.83);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,51831.46);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,55097.55);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,34456.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,32792.31);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,19673.75);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,5208.946);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,26605.68);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,14293.06);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,2284.68);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,754.9853);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,1449.969);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,395.2474);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(567173);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.2323196);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1004685);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,710021.3);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,474298.3);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,325531.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,228868.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,163448.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,117706.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,85409.49);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,61864.97);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,44683.3);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,31986.54);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,22816.34);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,15925.81);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,10912.36);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,7303.788);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,4746.118);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,2923.141);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,1728.394);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,962.3938);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,488.6247);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,214.5156);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,81.35532);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,20.64614);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,3.826907);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.07408417);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.1359803);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,272.1959);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,230.3949);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,188.74);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,156.562);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,131.3777);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,111.1067);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,94.32042);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,80.36449);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,68.45947);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,58.17405);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,49.24181);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,41.62535);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,34.77262);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,28.80194);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,23.57506);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,18.99249);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,14.90317);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,11.45542);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,8.55198);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,6.083527);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,4.055959);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,2.501246);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,1.253952);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.5527635);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.07408417);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(4.906418e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
