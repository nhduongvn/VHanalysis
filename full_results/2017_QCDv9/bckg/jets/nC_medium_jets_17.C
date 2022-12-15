void nC_medium_jets_17()
{
//=========Macro generated from canvas: nC_medium_jets_17/nC_medium_jets_17
//=========  (Thu Dec 15 10:05:10 2022) by ROOT version 6.14/09
   TCanvas *nC_medium_jets_17 = new TCanvas("nC_medium_jets_17", "nC_medium_jets_17",0,0,600,600);
   nC_medium_jets_17->SetHighLightColor(2);
   nC_medium_jets_17->Range(-2.683529,-2.477664e+11,11.21633,1.816954e+12);
   nC_medium_jets_17->SetFillColor(0);
   nC_medium_jets_17->SetFillStyle(4000);
   nC_medium_jets_17->SetBorderMode(0);
   nC_medium_jets_17->SetBorderSize(2);
   nC_medium_jets_17->SetLeftMargin(0.15709);
   nC_medium_jets_17->SetRightMargin(0.1234783);
   nC_medium_jets_17->SetBottomMargin(0.12);
   nC_medium_jets_17->SetFrameFillStyle(1000);
   nC_medium_jets_17->SetFrameBorderMode(0);
   nC_medium_jets_17->SetFrameFillStyle(1000);
   nC_medium_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.533792e+12);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",10,-0.5,9.5);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(1.610482e+12);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_22->GetXaxis()->SetRange(1,10);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetLabelSize(0.035);
   st_stack_22->GetXaxis()->SetTitleSize(0.035);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/1.0");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetLabelSize(0.035);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleOffset(0);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetLabelSize(0.035);
   st_stack_22->GetZaxis()->SetTitleSize(0.035);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,1.022518e+12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,3.424596e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,4.24691e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,2.544644e+09);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.418096e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,8078867);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,465052.2);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,15717.15);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,945.93);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,466.5196);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(11,0.4767426);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.284374e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,7.279574e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,2.446553e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,5283278);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,1077840);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,230494.6);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,51012.41);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,2229.419);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,329.0409);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,372.1519);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(11,0.4767426);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(3.0187e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,1.056273e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,1.391494e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,8181795);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,2836073);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,651454.8);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,107636.6);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,13835.78);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,1517.129);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,147.8863);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,13.50947);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,0.8903052);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,800.1252);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,952.6351);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,753.1949);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,453.9138);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,221.0356);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,90.68014);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,32.64051);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,10.83799);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,3.36328);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,1.02892);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.2558011);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(6.245234e+08);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#00cc00");
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

   ci = TColor::GetColor("#cc0000");
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
   nC_medium_jets_17->Modified();
   nC_medium_jets_17->cd();
   nC_medium_jets_17->SetSelected(nC_medium_jets_17);
}
