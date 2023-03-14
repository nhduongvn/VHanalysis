#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_16_logY()
{
//=========Macro generated from canvas: CvB_jets_bckg_16/CvB_jets_bckg_16
//=========  (Wed Mar  1 14:06:39 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_bckg_16 = new TCanvas("CvB_jets_bckg_16", "CvB_jets_bckg_16",0,0,600,600);
   CvB_jets_bckg_16->SetHighLightColor(2);
   CvB_jets_bckg_16->Range(-0.2183529,4.24515,1.171633,14.84741);
   CvB_jets_bckg_16->SetFillColor(0);
   CvB_jets_bckg_16->SetFillStyle(4000);
   CvB_jets_bckg_16->SetBorderMode(0);
   CvB_jets_bckg_16->SetBorderSize(2);
   CvB_jets_bckg_16->SetLogy();
   CvB_jets_bckg_16->SetLeftMargin(0.15709);
   CvB_jets_bckg_16->SetRightMargin(0.1234783);
   CvB_jets_bckg_16->SetBottomMargin(0.12);
   CvB_jets_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_bckg_16->SetFrameBorderMode(0);
   CvB_jets_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1517166);
   st->SetMaximum(2.506974e+13);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",20,0,1);
   st_stack_20->SetMinimum(329170.4);
   st_stack_20->SetMaximum(6.126101e+13);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_20->GetXaxis()->SetRange(1,20);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.05");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,9.71762e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,1.976427e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,1.515497e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,1.52965e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,1.73186e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,2.03999e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,2.446393e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,3.031033e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,4.003547e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,5.730259e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,8.0377e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.122511e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,1.673946e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,2.516809e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,4.165498e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,7.135526e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,1.336906e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,2.50683e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,1.628059e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,1.347382e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,1.2948e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,5828437);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,5114404);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,5146820);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,5489943);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,5981778);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,6569844);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,7321899);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,8432305);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,1.011179e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.200213e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,1.419631e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,1.734232e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,2.131104e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,2.74538e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,3.601145e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,4.92359e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,6.740008e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,5.495139e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,1.525835e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(5.443057e+08);

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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,1.531976e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,2568076);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,1669034);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,1440936);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,1352257);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,1245926);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1197380);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1206529);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,1300017);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,1443216);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,1602374);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,1828996);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,2316344);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,2953139);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,4097374);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,5838884);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,9073194);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,1.439589e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,1.396534e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,2286526);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,985.5669);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,403.1894);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,325.1958);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,302.4027);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,293.1897);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,281.6495);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,276.3904);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,277.6748);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,288.4988);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,304.282);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,321.0404);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,343.475);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,387.1945);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,438.073);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,517.5578);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,620.4877);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,776.2312);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,981.8626);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,974.1904);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,394.0713);
   VbbHcc_jets_CvB_stack_2->SetEntries(1.431895e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_bckg_16->Modified();
   CvB_jets_bckg_16->cd();
   CvB_jets_bckg_16->SetSelected(CvB_jets_bckg_16);
}
