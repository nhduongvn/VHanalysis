#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_signal_17()
{
//=========Macro generated from canvas: Z_mass_signal_17/Z_mass_signal_17
//=========  (Thu Mar 23 11:54:00 2023) by ROOT version 6.26/06
   TCanvas *Z_mass_signal_17 = new TCanvas("Z_mass_signal_17", "Z_mass_signal_17",0,0,600,600);
   Z_mass_signal_17->SetHighLightColor(2);
   Z_mass_signal_17->Range(-65.50587,-0.002163846,351.4899,0.0158682);
   Z_mass_signal_17->SetFillColor(0);
   Z_mass_signal_17->SetFillStyle(4000);
   Z_mass_signal_17->SetBorderMode(0);
   Z_mass_signal_17->SetBorderSize(2);
   Z_mass_signal_17->SetLeftMargin(0.15709);
   Z_mass_signal_17->SetRightMargin(0.1234783);
   Z_mass_signal_17->SetBottomMargin(0.12);
   Z_mass_signal_17->SetFrameFillStyle(1000);
   Z_mass_signal_17->SetFrameBorderMode(0);
   Z_mass_signal_17->SetFrameFillStyle(1000);
   Z_mass_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.014065);
   
   TH1F *st_stack_27 = new TH1F("st_stack_27","",200,0,400);
   st_stack_27->SetMinimum(0);
   st_stack_27->SetMaximum(0.014065);
   st_stack_27->SetDirectory(0);
   st_stack_27->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_27->SetLineColor(ci);
   st_stack_27->GetXaxis()->SetTitle("M_{Z} [GeV]");
   st_stack_27->GetXaxis()->SetRange(1,150);
   st_stack_27->GetXaxis()->SetLabelFont(42);
   st_stack_27->GetXaxis()->SetTitleOffset(1);
   st_stack_27->GetXaxis()->SetTitleFont(42);
   st_stack_27->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_27->GetYaxis()->SetLabelFont(42);
   st_stack_27->GetYaxis()->SetTitleSize(0.037);
   st_stack_27->GetYaxis()->SetTitleFont(42);
   st_stack_27->GetZaxis()->SetLabelFont(42);
   st_stack_27->GetZaxis()->SetTitleOffset(1);
   st_stack_27->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_27);
   
   
   TH1D *VbbHcc_MC_Z_mass_stack_1 = new TH1D("VbbHcc_MC_Z_mass_stack_1","",200,0,400);
   VbbHcc_MC_Z_mass_stack_1->SetBinContent(0,0.001452323);
   VbbHcc_MC_Z_mass_stack_1->SetBinContent(1,0.01167395);
   VbbHcc_MC_Z_mass_stack_1->SetBinContent(201,179.8054);
   VbbHcc_MC_Z_mass_stack_1->SetBinError(0,0.002973158);
   VbbHcc_MC_Z_mass_stack_1->SetBinError(1,0.005496378);
   VbbHcc_MC_Z_mass_stack_1->SetBinError(201,0.5926378);
   VbbHcc_MC_Z_mass_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Z_mass_stack_1->SetFillColor(ci);
   VbbHcc_MC_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_MC_Z_mass_stack_2 = new TH1D("VbbHcc_MC_Z_mass_stack_2","",200,0,400);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(201,24.83809);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(201,0.07724779);
   VbbHcc_MC_Z_mass_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Z_mass_stack_2->SetFillColor(ci);
   VbbHcc_MC_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_mass_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Z_mass_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Z_mass_stack_1","ZHcc","F");

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
   Z_mass_signal_17->Modified();
   Z_mass_signal_17->cd();
   Z_mass_signal_17->SetSelected(Z_mass_signal_17);
}
