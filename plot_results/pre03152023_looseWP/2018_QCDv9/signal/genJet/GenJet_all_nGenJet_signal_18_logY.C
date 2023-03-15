#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_signal_18/GenJet_all_nGenJet_signal_18
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_signal_18 = new TCanvas("GenJet_all_nGenJet_signal_18", "GenJet_all_nGenJet_signal_18",0,0,600,600);
   GenJet_all_nGenJet_signal_18->SetHighLightColor(2);
   GenJet_all_nGenJet_signal_18->Range(-4.867058,-0.8358324,22.93266,3.142685);
   GenJet_all_nGenJet_signal_18->SetFillColor(0);
   GenJet_all_nGenJet_signal_18->SetFillStyle(4000);
   GenJet_all_nGenJet_signal_18->SetBorderMode(0);
   GenJet_all_nGenJet_signal_18->SetBorderSize(2);
   GenJet_all_nGenJet_signal_18->SetLogy();
   GenJet_all_nGenJet_signal_18->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_signal_18->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_signal_18->SetBottomMargin(0.12);
   GenJet_all_nGenJet_signal_18->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_signal_18->SetFrameBorderMode(0);
   GenJet_all_nGenJet_signal_18->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(367.278);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",20,-0.5,19.5);
   st_stack_5->SetMinimum(0.4381166);
   st_stack_5->SetMaximum(555.6913);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetTitleOffset(1);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Event/1.0");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetTitleSize(0.037);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetTitleOffset(1);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,0.002133138);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,0.03164037);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,2.652365);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,43.51251);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,214.1033);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,278.391);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,243.405);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,175.1211);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,114.1298);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,66.06294);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,36.96729);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,20.06195);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,9.946769);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,4.884041);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,2.259468);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,1.088362);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,0.4781005);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,0.2193892);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,0.07739392);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,0.03967023);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,0.03250983);
   GenJet_all_nGenJet_stack_1->SetBinError(1,0.002133138);
   GenJet_all_nGenJet_stack_1->SetBinError(2,0.009749948);
   GenJet_all_nGenJet_stack_1->SetBinError(3,0.0912396);
   GenJet_all_nGenJet_stack_1->SetBinError(4,0.3778992);
   GenJet_all_nGenJet_stack_1->SetBinError(5,0.8616224);
   GenJet_all_nGenJet_stack_1->SetBinError(6,0.9713699);
   GenJet_all_nGenJet_stack_1->SetBinError(7,0.894656);
   GenJet_all_nGenJet_stack_1->SetBinError(8,0.7521963);
   GenJet_all_nGenJet_stack_1->SetBinError(9,0.6071105);
   GenJet_all_nGenJet_stack_1->SetBinError(10,0.4441857);
   GenJet_all_nGenJet_stack_1->SetBinError(11,0.3291773);
   GenJet_all_nGenJet_stack_1->SetBinError(12,0.2464516);
   GenJet_all_nGenJet_stack_1->SetBinError(13,0.2019684);
   GenJet_all_nGenJet_stack_1->SetBinError(14,0.1311168);
   GenJet_all_nGenJet_stack_1->SetBinError(15,0.07926068);
   GenJet_all_nGenJet_stack_1->SetBinError(16,0.05538827);
   GenJet_all_nGenJet_stack_1->SetBinError(17,0.03573844);
   GenJet_all_nGenJet_stack_1->SetBinError(18,0.02537616);
   GenJet_all_nGenJet_stack_1->SetBinError(19,0.01469066);
   GenJet_all_nGenJet_stack_1->SetBinError(20,0.01074056);
   GenJet_all_nGenJet_stack_1->SetBinError(21,0.009982989);
   GenJet_all_nGenJet_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenJet_stack_1->SetFillColor(ci);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_1,"");
   
   TH1D *GenJet_all_nGenJet_stack_2 = new TH1D("GenJet_all_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,0.04188295);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,1.244398);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,10.81172);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,26.44975);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,35.50398);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,33.3714);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,25.05376);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,16.32601);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,9.515139);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,5.082088);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,2.584311);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,1.241616);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,0.5457785);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,0.2515766);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,0.1162423);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,0.0518035);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,0.0184066);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,0.007891603);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,0.005526698);
   GenJet_all_nGenJet_stack_2->SetBinError(3,0.003842075);
   GenJet_all_nGenJet_stack_2->SetBinError(4,0.02589833);
   GenJet_all_nGenJet_stack_2->SetBinError(5,0.06676809);
   GenJet_all_nGenJet_stack_2->SetBinError(6,0.1023745);
   GenJet_all_nGenJet_stack_2->SetBinError(7,0.1208147);
   GenJet_all_nGenJet_stack_2->SetBinError(8,0.1147582);
   GenJet_all_nGenJet_stack_2->SetBinError(9,0.09922682);
   GenJet_all_nGenJet_stack_2->SetBinError(10,0.08161761);
   GenJet_all_nGenJet_stack_2->SetBinError(11,0.06266865);
   GenJet_all_nGenJet_stack_2->SetBinError(12,0.04475876);
   GenJet_all_nGenJet_stack_2->SetBinError(13,0.03162805);
   GenJet_all_nGenJet_stack_2->SetBinError(14,0.02555862);
   GenJet_all_nGenJet_stack_2->SetBinError(15,0.01419273);
   GenJet_all_nGenJet_stack_2->SetBinError(16,0.009587469);
   GenJet_all_nGenJet_stack_2->SetBinError(17,0.006474364);
   GenJet_all_nGenJet_stack_2->SetBinError(18,0.004211611);
   GenJet_all_nGenJet_stack_2->SetBinError(19,0.00268046);
   GenJet_all_nGenJet_stack_2->SetBinError(20,0.001662522);
   GenJet_all_nGenJet_stack_2->SetBinError(21,0.001445496);
   GenJet_all_nGenJet_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenJet_stack_2->SetFillColor(ci);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenJet_stack_1","ZHcc","F");

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
   GenJet_all_nGenJet_signal_18->Modified();
   GenJet_all_nGenJet_signal_18->cd();
   GenJet_all_nGenJet_signal_18->SetSelected(GenJet_all_nGenJet_signal_18);
}
