#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_18_logY()
{
//=========Macro generated from canvas: CvL_jets_18/CvL_jets_18
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_18 = new TCanvas("CvL_jets_18", "CvL_jets_18",0,0,600,600);
   CvL_jets_18->SetHighLightColor(2);
   CvL_jets_18->Range(-0.2183529,4.979956,1.171633,15.48149);
   CvL_jets_18->SetFillColor(0);
   CvL_jets_18->SetFillStyle(4000);
   CvL_jets_18->SetBorderMode(0);
   CvL_jets_18->SetBorderSize(2);
   CvL_jets_18->SetLogy();
   CvL_jets_18->SetLeftMargin(0.15709);
   CvL_jets_18->SetRightMargin(0.1234783);
   CvL_jets_18->SetBottomMargin(0.12);
   CvL_jets_18->SetFrameFillStyle(1000);
   CvL_jets_18->SetFrameBorderMode(0);
   CvL_jets_18->SetFrameFillStyle(1000);
   CvL_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(7949151);
   st->SetMaximum(1.111443e+14);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",20,0,1);
   st_stack_11->SetMinimum(1738362);
   st_stack_11->SetMaximum(2.699821e+14);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_11->GetXaxis()->SetRange(1,20);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/0.05");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,1.111401e+12);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,1.075813e+12);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,2.83006e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,1.04029e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,5.377884e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,3.406369e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,2.352442e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,1.713339e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,1.362984e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,1.144699e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,9.930317e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,8.790121e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,8.174059e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,7.945741e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,8.133175e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,8.762962e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,9.778372e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,1.203296e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,1.620022e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,4.456102e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,1.731049e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.691122e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,8.57842e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,5.18706e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,3.736647e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,2.978771e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,2.474937e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,2.129713e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,1.880746e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,1.716469e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,1.613414e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,1.527112e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,1.464024e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,1.439118e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,1.44349e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,1.533366e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,1.608536e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,1.780769e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,2.050449e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,3.460982e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(8.05601e+08);

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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,4.174375e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,5.403224e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,1.863133e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,8615417);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,5315821);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,4016376);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,3302209);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,2854009);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,2658804);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,2615450);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,2660999);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,2766725);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,3029984);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,3409582);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,3996069);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,4873584);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,6080569);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,8142137);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,1.149811e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,2.561405e+07);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1989.928);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,2237.101);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,1302.953);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,885.1188);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,694.3905);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,601.3255);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,545.3605);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,505.6597);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,488.0762);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,483.9607);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,487.5215);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,496.7782);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,520.5965);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,551.2769);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,596.4376);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,658.4464);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,736.0061);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,852.4675);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,1016.312);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,1529.617);
   VbbHcc_jets_CvL_stack_2->SetEntries(2.99246e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_18->Modified();
   CvL_jets_18->cd();
   CvL_jets_18->SetSelected(CvL_jets_18);
}
