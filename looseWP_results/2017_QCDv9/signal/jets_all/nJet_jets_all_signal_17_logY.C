#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_signal_17_logY()
{
//=========Macro generated from canvas: nJet_jets_all_signal_17/nJet_jets_all_signal_17
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_signal_17 = new TCanvas("nJet_jets_all_signal_17", "nJet_jets_all_signal_17",0,0,600,600);
   nJet_jets_all_signal_17->SetHighLightColor(2);
   nJet_jets_all_signal_17->Range(-3.556941,0.5334667,15.90286,2.608362);
   nJet_jets_all_signal_17->SetFillColor(0);
   nJet_jets_all_signal_17->SetFillStyle(4000);
   nJet_jets_all_signal_17->SetBorderMode(0);
   nJet_jets_all_signal_17->SetBorderSize(2);
   nJet_jets_all_signal_17->SetLogy();
   nJet_jets_all_signal_17->SetLeftMargin(0.15709);
   nJet_jets_all_signal_17->SetRightMargin(0.1234783);
   nJet_jets_all_signal_17->SetBottomMargin(0.12);
   nJet_jets_all_signal_17->SetFrameFillStyle(1000);
   nJet_jets_all_signal_17->SetFrameBorderMode(0);
   nJet_jets_all_signal_17->SetFrameFillStyle(1000);
   nJet_jets_all_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(199.7422);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",14,-0.5,13.5);
   st_stack_159->SetMinimum(6.059743);
   st_stack_159->SetMaximum(251.694);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_159->GetXaxis()->SetRange(1,14);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetTitleOffset(1);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Event/1.0");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetTitleSize(0.037);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetTitleOffset(1);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,0.02327052);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,0.1405962);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,3.246442);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,27.63658);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,91.8492);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,137.9423);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,147.0928);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,129.3444);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,99.08408);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,70.3254);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,46.41071);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,28.66863);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,16.94702);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,9.857324);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,11.53247);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,0.006504049);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,0.01783798);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,0.08345155);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,0.2404999);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,0.4339032);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,0.5242462);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,0.5351182);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,0.4974883);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,0.4338473);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,0.3642126);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,0.2951708);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,0.2315853);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,0.1781414);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,0.135645);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,0.1466862);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,0.0002640953);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,0.00104581);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,0.06593117);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,1.063799);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,5.844018);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,13.13391);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,18.69327);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,19.90058);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,17.49047);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,13.45913);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,9.382299);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,6.156629);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,3.746142);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,2.158351);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,2.597072);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,0.0002640953);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,0.0005229274);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,0.004031057);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,0.01617053);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,0.03782487);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,0.05653859);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,0.06724799);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,0.06915084);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,0.06467758);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,0.05662168);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,0.04721031);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,0.03824543);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,0.02981748);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,0.02262941);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,0.02487857);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_signal_17->Modified();
   nJet_jets_all_signal_17->cd();
   nJet_jets_all_signal_17->SetSelected(nJet_jets_all_signal_17);
}
