#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenJet_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenJet_signal_18/GenJet_cuts_nGenJet_signal_18
//=========  (Fri Mar 10 12:49:22 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenJet_signal_18 = new TCanvas("GenJet_cuts_nGenJet_signal_18", "GenJet_cuts_nGenJet_signal_18",0,0,600,600);
   GenJet_cuts_nGenJet_signal_18->SetHighLightColor(2);
   GenJet_cuts_nGenJet_signal_18->Range(-4.867058,-0.8772004,22.93266,3.326821);
   GenJet_cuts_nGenJet_signal_18->SetFillColor(0);
   GenJet_cuts_nGenJet_signal_18->SetFillStyle(4000);
   GenJet_cuts_nGenJet_signal_18->SetBorderMode(0);
   GenJet_cuts_nGenJet_signal_18->SetBorderSize(2);
   GenJet_cuts_nGenJet_signal_18->SetLogy();
   GenJet_cuts_nGenJet_signal_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenJet_signal_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenJet_signal_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenJet_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_signal_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenJet_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(522.2643);
   
   TH1F *st_stack_77 = new TH1F("st_stack_77","",20,-0.5,19.5);
   st_stack_77->SetMinimum(0.4239183);
   st_stack_77->SetMaximum(806.1558);
   st_stack_77->SetDirectory(0);
   st_stack_77->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_77->SetLineColor(ci);
   st_stack_77->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_77->GetXaxis()->SetLabelFont(42);
   st_stack_77->GetXaxis()->SetTitleOffset(1);
   st_stack_77->GetXaxis()->SetTitleFont(42);
   st_stack_77->GetYaxis()->SetTitle("Event/1.0");
   st_stack_77->GetYaxis()->SetLabelFont(42);
   st_stack_77->GetYaxis()->SetTitleSize(0.037);
   st_stack_77->GetYaxis()->SetTitleFont(42);
   st_stack_77->GetZaxis()->SetLabelFont(42);
   st_stack_77->GetZaxis()->SetTitleOffset(1);
   st_stack_77->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_77);
   
   
   TH1D *GenJet_cuts_nGenJet_stack_1 = new TH1D("GenJet_cuts_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(1,135.881);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(2,253.0627);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(3,395.0073);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(4,268.0725);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(5,117.5274);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(6,32.56564);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(7,8.501199);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(8,2.130191);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(9,0.6007866);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(10,0.09253766);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(11,0.01917635);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(12,0.006377008);
   GenJet_cuts_nGenJet_stack_1->SetBinError(1,0.6825774);
   GenJet_cuts_nGenJet_stack_1->SetBinError(2,0.9310012);
   GenJet_cuts_nGenJet_stack_1->SetBinError(3,1.129823);
   GenJet_cuts_nGenJet_stack_1->SetBinError(4,0.9346125);
   GenJet_cuts_nGenJet_stack_1->SetBinError(5,0.6173367);
   GenJet_cuts_nGenJet_stack_1->SetBinError(6,0.3344919);
   GenJet_cuts_nGenJet_stack_1->SetBinError(7,0.1560397);
   GenJet_cuts_nGenJet_stack_1->SetBinError(8,0.07813281);
   GenJet_cuts_nGenJet_stack_1->SetBinError(9,0.04010147);
   GenJet_cuts_nGenJet_stack_1->SetBinError(10,0.0162693);
   GenJet_cuts_nGenJet_stack_1->SetBinError(11,0.006895067);
   GenJet_cuts_nGenJet_stack_1->SetBinError(12,0.004512049);
   GenJet_cuts_nGenJet_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenJet_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_1,"");
   
   TH1D *GenJet_cuts_nGenJet_stack_2 = new TH1D("GenJet_cuts_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(1,1.945467);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(2,10.49192);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(3,38.47211);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(4,53.74128);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(5,40.9023);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(6,16.70252);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(7,4.693874);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(8,1.037622);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(9,0.1972399);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(10,0.03318298);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(11,0.005422819);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(12,0.0003489566);
   GenJet_cuts_nGenJet_stack_2->SetBinError(1,0.02709846);
   GenJet_cuts_nGenJet_stack_2->SetBinError(2,0.06538221);
   GenJet_cuts_nGenJet_stack_2->SetBinError(3,0.1264852);
   GenJet_cuts_nGenJet_stack_2->SetBinError(4,0.1475682);
   GenJet_cuts_nGenJet_stack_2->SetBinError(5,0.1273419);
   GenJet_cuts_nGenJet_stack_2->SetBinError(6,0.08119592);
   GenJet_cuts_nGenJet_stack_2->SetBinError(7,0.04199334);
   GenJet_cuts_nGenJet_stack_2->SetBinError(8,0.02010182);
   GenJet_cuts_nGenJet_stack_2->SetBinError(9,0.008484387);
   GenJet_cuts_nGenJet_stack_2->SetBinError(10,0.003481647);
   GenJet_cuts_nGenJet_stack_2->SetBinError(11,0.001355431);
   GenJet_cuts_nGenJet_stack_2->SetBinError(12,0.0003489566);
   GenJet_cuts_nGenJet_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenJet_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   GenJet_cuts_nGenJet_signal_18->Modified();
   GenJet_cuts_nGenJet_signal_18->cd();
   GenJet_cuts_nGenJet_signal_18->SetSelected(GenJet_cuts_nGenJet_signal_18);
}
