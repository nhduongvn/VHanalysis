#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_signal_18()
{
//=========Macro generated from canvas: nJet_jets_signal_18/nJet_jets_signal_18
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_signal_18 = new TCanvas("nJet_jets_signal_18", "nJet_jets_signal_18",0,0,600,600);
   nJet_jets_signal_18->SetHighLightColor(2);
   nJet_jets_signal_18->Range(-3.556941,-77.59075,15.90286,568.9988);
   nJet_jets_signal_18->SetFillColor(0);
   nJet_jets_signal_18->SetFillStyle(4000);
   nJet_jets_signal_18->SetBorderMode(0);
   nJet_jets_signal_18->SetBorderSize(2);
   nJet_jets_signal_18->SetLeftMargin(0.15709);
   nJet_jets_signal_18->SetRightMargin(0.1234783);
   nJet_jets_signal_18->SetBottomMargin(0.12);
   nJet_jets_signal_18->SetFrameFillStyle(1000);
   nJet_jets_signal_18->SetFrameBorderMode(0);
   nJet_jets_signal_18->SetFrameFillStyle(1000);
   nJet_jets_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(504.3399);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",14,-0.5,13.5);
   st_stack_5->SetMinimum(0);
   st_stack_5->SetMaximum(504.3399);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_5->GetXaxis()->SetRange(1,14);
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
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,159.3121);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,236.7924);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,380.4856);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,271.5392);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,120.4145);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,33.51172);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,8.598069);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,2.150963);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,0.5275677);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,0.1036579);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,0.02472135);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,0.006377008);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.7546193);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.8917701);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,1.106865);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.9391456);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.6229969);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.3391067);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.1581924);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,0.0792929);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,0.03733092);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,0.01741471);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,0.007886338);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,0.004512049);
   VbbHcc_jets_nJet_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,2.699266);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,10.45156);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,38.11652);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,53.45587);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,40.77819);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,16.70425);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,4.717875);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,1.053217);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,0.2100977);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,0.03018554);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,0.005958374);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,0.000280877);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,0.0328884);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,0.06443424);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,0.1276821);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,0.1458444);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,0.1272276);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,0.08115638);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,0.04203215);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,0.02026006);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,0.008738893);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,0.003259677);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,0.001474706);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,0.000280877);
   VbbHcc_jets_nJet_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","ZHcc","F");

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
   nJet_jets_signal_18->Modified();
   nJet_jets_signal_18->cd();
   nJet_jets_signal_18->SetSelected(nJet_jets_signal_18);
}
