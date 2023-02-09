#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_16_logY()
{
//=========Macro generated from canvas: nC_medium_jets_16/nC_medium_jets_16
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_16 = new TCanvas("nC_medium_jets_16", "nC_medium_jets_16",0,0,600,600);
   nC_medium_jets_16->SetHighLightColor(2);
   nC_medium_jets_16->Range(-2.683529,-2.080399,11.21633,16.31624);
   nC_medium_jets_16->SetFillColor(0);
   nC_medium_jets_16->SetFillStyle(4000);
   nC_medium_jets_16->SetBorderMode(0);
   nC_medium_jets_16->SetBorderSize(2);
   nC_medium_jets_16->SetLogy();
   nC_medium_jets_16->SetLeftMargin(0.15709);
   nC_medium_jets_16->SetRightMargin(0.1234783);
   nC_medium_jets_16->SetBottomMargin(0.12);
   nC_medium_jets_16->SetFrameFillStyle(1000);
   nC_medium_jets_16->SetFrameBorderMode(0);
   nC_medium_jets_16->SetFrameFillStyle(1000);
   nC_medium_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8.359083e+13);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",10,-0.5,9.5);
   st_stack_21->SetMinimum(1.340289);
   st_stack_21->SetMaximum(2.996256e+14);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_21->GetXaxis()->SetRange(1,10);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/1.0");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,8.358999e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,2.797187e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,3.389013e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,1.913162e+09);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.025378e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,5573640);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,363826.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,30768.78);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,634.4787);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,59.36589);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(11,0.4988759);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.225944e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,6.924817e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,2.287392e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,4677657);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,893671);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,175250.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,47458.04);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,18615.79);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,94.46411);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,19.51705);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(11,0.4988759);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(2.445319e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,8469726);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,1.140562e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,6861450);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,2434388);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,572519.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,96640.21);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,12648.91);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,1374.163);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,137.3457);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,13.3958);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,1.229272);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,747.1884);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,900.8272);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,722.1316);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,441.3103);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,217.7664);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,90.32082);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,32.77312);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,10.79243);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,3.430551);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,1.053134);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.3083392);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(4.67375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_16->Modified();
   nC_medium_jets_16->cd();
   nC_medium_jets_16->SetSelected(nC_medium_jets_16);
}
