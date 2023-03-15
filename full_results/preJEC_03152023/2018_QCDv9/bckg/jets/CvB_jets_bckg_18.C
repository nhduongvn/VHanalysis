#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_18()
{
//=========Macro generated from canvas: CvB_jets_bckg_18/CvB_jets_bckg_18
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_bckg_18 = new TCanvas("CvB_jets_bckg_18", "CvB_jets_bckg_18",0,0,600,600);
   CvB_jets_bckg_18->SetHighLightColor(2);
   CvB_jets_bckg_18->Range(-0.2183529,-8.546268e+10,1.171633,6.267263e+11);
   CvB_jets_bckg_18->SetFillColor(0);
   CvB_jets_bckg_18->SetFillStyle(4000);
   CvB_jets_bckg_18->SetBorderMode(0);
   CvB_jets_bckg_18->SetBorderSize(2);
   CvB_jets_bckg_18->SetLeftMargin(0.15709);
   CvB_jets_bckg_18->SetRightMargin(0.1234783);
   CvB_jets_bckg_18->SetBottomMargin(0.12);
   CvB_jets_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_bckg_18->SetFrameBorderMode(0);
   CvB_jets_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.555074e+11);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",20,0,1);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(5.555074e+11);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_24->GetXaxis()->SetRange(1,20);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Event/0.05");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,2.035873e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,3.604001e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,2.706358e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,2.776845e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,3.037622e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,3.446646e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,4.050963e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,4.959423e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,6.46828e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,8.874051e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,1.211453e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.701543e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,2.550964e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,3.820568e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,6.308543e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,1.099337e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,2.161939e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,4.610449e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,3.38451e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,2.838474e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,2.20163e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,9271454);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,7821080);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,8021448);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,8372506);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,8796412);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,9608144);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,1.078014e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,1.236223e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,1.440559e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.682507e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,1.999235e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,2.465017e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,3.004916e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,3.862385e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,5.146961e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,7.213608e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,1.063214e+08);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,9.331803e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,2.644022e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(6.39856e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,3.146056e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,4461199);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,2882715);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,2516580);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,2288321);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,2056697);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1972601);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1965421);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,2132454);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,2302904);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,2500329);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,2855949);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,3622109);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,4611909);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,6385975);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,9209757);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,1.492529e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,2.625078e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,2.754172e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,4876766);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1571.921);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,589.3524);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,474.172);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,443.5484);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,422.1835);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,401.3932);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,393.1729);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,392.6867);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,408.3448);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,424.6415);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,442.764);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,474.2614);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,534.4249);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,603.1969);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,711.3125);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,857.897);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,1097.615);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1476.238);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1538.811);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,649.9757);
   VbbHcc_jets_CvB_stack_2->SetEntries(2.471324e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","QCD","F");

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
   CvB_jets_bckg_18->Modified();
   CvB_jets_bckg_18->cd();
   CvB_jets_bckg_18->SetSelected(CvB_jets_bckg_18);
}
