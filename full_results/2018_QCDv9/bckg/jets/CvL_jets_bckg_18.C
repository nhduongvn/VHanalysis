#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_18()
{
//=========Macro generated from canvas: CvL_jets_bckg_18/CvL_jets_bckg_18
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_18 = new TCanvas("CvL_jets_bckg_18", "CvL_jets_bckg_18",0,0,600,600);
   CvL_jets_bckg_18->SetHighLightColor(2);
   CvL_jets_bckg_18->Range(-0.2183529,-1.120109e+11,1.171633,8.214129e+11);
   CvL_jets_bckg_18->SetFillColor(0);
   CvL_jets_bckg_18->SetFillStyle(4000);
   CvL_jets_bckg_18->SetBorderMode(0);
   CvL_jets_bckg_18->SetBorderSize(2);
   CvL_jets_bckg_18->SetLeftMargin(0.15709);
   CvL_jets_bckg_18->SetRightMargin(0.1234783);
   CvL_jets_bckg_18->SetBottomMargin(0.12);
   CvL_jets_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_bckg_18->SetFrameBorderMode(0);
   CvL_jets_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.280705e+11);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",20,0,1);
   st_stack_18->SetMinimum(0);
   st_stack_18->SetMaximum(7.280705e+11);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_18->GetXaxis()->SetRange(1,20);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Event/0.05");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,6.042683e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,4.634066e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,1.179982e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,4.635721e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,2.420071e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,1.533012e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,1.065794e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,7.819443e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,6.249221e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,5.305216e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,4.671584e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,4.185168e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,3.918184e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,3.865672e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,4.043974e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,4.431602e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,5.001459e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,6.150517e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,8.314984e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,2.404581e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,1.234142e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.057299e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,5.314088e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,3.314166e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,2.412067e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.907765e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.590884e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,1.351634e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,1.225401e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,1.134365e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,1.083994e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,1.002348e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,9650876);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,9757710);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,9973246);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,1.034994e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,1.098721e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,1.215105e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,1.414849e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,2.424818e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(6.39856e+08);

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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,3.024877e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,3.539886e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,1.237381e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,6029627);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,3782819);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,2900017);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,2418082);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,2117249);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1988847);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1972923);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,2030246);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,2133814);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,2358339);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,2674486);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,3162724);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,3889754);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,4885560);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,6571993);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,9294091);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,2.058801e+07);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1595.577);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1705.441);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,1000.621);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,698.1277);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,551.885);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,481.4417);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,439.4121);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,409.7204);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,397.087);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,394.9643);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,400.1126);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,409.7876);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,431.1403);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,458.4332);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,498.3232);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,552.1478);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,619.031);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,718.5393);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,857.588);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,1286.723);
   VbbHcc_jets_CvL_stack_2->SetEntries(2.471324e+09);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_bckg_18->Modified();
   CvL_jets_bckg_18->cd();
   CvL_jets_bckg_18->SetSelected(CvL_jets_bckg_18);
}
