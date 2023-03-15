#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_signal_18_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_signal_18/nC_medium_jets_all_signal_18
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_signal_18 = new TCanvas("nC_medium_jets_all_signal_18", "nC_medium_jets_all_signal_18",0,0,600,600);
   nC_medium_jets_all_signal_18->SetHighLightColor(2);
   nC_medium_jets_all_signal_18->Range(-2.683529,0.4101384,11.21633,3.097608);
   nC_medium_jets_all_signal_18->SetFillColor(0);
   nC_medium_jets_all_signal_18->SetFillStyle(4000);
   nC_medium_jets_all_signal_18->SetBorderMode(0);
   nC_medium_jets_all_signal_18->SetBorderSize(2);
   nC_medium_jets_all_signal_18->SetLogy();
   nC_medium_jets_all_signal_18->SetLeftMargin(0.15709);
   nC_medium_jets_all_signal_18->SetRightMargin(0.1234783);
   nC_medium_jets_all_signal_18->SetBottomMargin(0.12);
   nC_medium_jets_all_signal_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_signal_18->SetFrameBorderMode(0);
   nC_medium_jets_all_signal_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(503.0939);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",10,-0.5,9.5);
   st_stack_191->SetMinimum(5.402997);
   st_stack_191->SetMaximum(674.3118);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_191->GetXaxis()->SetRange(1,10);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Event/1.0");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,71.08686);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,253.0398);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,369.808);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,290.6249);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,148.4136);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,56.88915);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,17.54573);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,4.679762);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,1.107896);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,0.2244952);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,0.04655732);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,0.5330824);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,0.9435735);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,1.119038);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,0.963636);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,0.6568769);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,0.3996159);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,0.2154642);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,0.1079041);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,0.05307749);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,0.02340308);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,0.009826346);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,5.800675);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,27.15095);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,47.75994);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,44.31218);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,26.60442);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,11.33602);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,3.839532);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,1.087803);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,0.2537181);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,0.05737181);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,0.02067199);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,0.04852762);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,0.1092761);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,0.1401623);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,0.1342518);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,0.09968553);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,0.06465454);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,0.03607847);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,0.01892862);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,0.008954888);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,0.004164694);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,0.002503522);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_signal_18->Modified();
   nC_medium_jets_all_signal_18->cd();
   nC_medium_jets_all_signal_18->SetSelected(nC_medium_jets_all_signal_18);
}
