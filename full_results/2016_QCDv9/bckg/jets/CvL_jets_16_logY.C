#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_16_logY()
{
//=========Macro generated from canvas: CvL_jets_16/CvL_jets_16
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_16 = new TCanvas("CvL_jets_16", "CvL_jets_16",0,0,600,600);
   CvL_jets_16->SetHighLightColor(2);
   CvL_jets_16->Range(-0.2183529,4.656299,1.171633,15.27819);
   CvL_jets_16->SetFillColor(0);
   CvL_jets_16->SetFillStyle(4000);
   CvL_jets_16->SetBorderMode(0);
   CvL_jets_16->SetBorderSize(2);
   CvL_jets_16->SetLogy();
   CvL_jets_16->SetLeftMargin(0.15709);
   CvL_jets_16->SetRightMargin(0.1234783);
   CvL_jets_16->SetBottomMargin(0.12);
   CvL_jets_16->SetFrameFillStyle(1000);
   CvL_jets_16->SetFrameBorderMode(0);
   CvL_jets_16->SetFrameFillStyle(1000);
   CvL_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(3937354);
   st->SetMaximum(6.721507e+13);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",20,0,1);
   st_stack_9->SetMinimum(852955.3);
   st_stack_9->SetMaximum(1.644385e+14);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_9->GetXaxis()->SetRange(1,20);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/0.05");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,5.50678e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,6.721175e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,1.833604e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,6.427376e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,3.145895e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,1.909035e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,1.265277e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,8.975354e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,6.988617e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,5.78483e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,4.946596e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,4.336622e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,4.040893e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,3.935339e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,4.020398e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,4.305649e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,4.751624e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,5.70034e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,7.115378e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,1.430075e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,9.613575e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.065021e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,5.549028e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,3.273591e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,2.28746e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.780841e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.44951e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,1.220204e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,1.076658e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,9792351);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,9051223);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,8469901);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,8170940);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,8059826);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,8142059);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,8420463);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,8834849);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,9664202);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,1.077725e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,1.528146e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(6.712362e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,2.090105e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,3.314094e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,1.243954e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,5769998);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,3537626);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,2651337);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,2148736);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,1843638);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1699588);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1645125);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,1646165);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,1686413);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,1824155);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,2014690);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,2302856);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,2730625);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,3302516);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,4245848);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,5484651);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,9022719);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1265.613);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1597.129);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,973.8561);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,661.1536);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,515.5635);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,444.8248);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,399.3886);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,369.2119);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,353.9818);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,347.814);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,347.4415);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,351.1989);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,364.8163);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,383.0979);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,409.3724);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,445.5937);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,489.834);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,555.3154);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,631.4282);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,814.1542);
   VbbHcc_jets_CvL_stack_2->SetEntries(1.778388e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","QCD","F");

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
   CvL_jets_16->Modified();
   CvL_jets_16->cd();
   CvL_jets_16->SetSelected(CvL_jets_16);
}
