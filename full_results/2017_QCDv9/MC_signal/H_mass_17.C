#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_17()
{
//=========Macro generated from canvas: H_mass_17/H_mass_17
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *H_mass_17 = new TCanvas("H_mass_17", "H_mass_17",0,0,600,600);
   H_mass_17->SetHighLightColor(2);
   H_mass_17->Range(-65.50587,-33.04763,351.4899,242.3493);
   H_mass_17->SetFillColor(0);
   H_mass_17->SetFillStyle(4000);
   H_mass_17->SetBorderMode(0);
   H_mass_17->SetBorderSize(2);
   H_mass_17->SetLeftMargin(0.15709);
   H_mass_17->SetRightMargin(0.1234783);
   H_mass_17->SetBottomMargin(0.12);
   H_mass_17->SetFrameFillStyle(1000);
   H_mass_17->SetFrameBorderMode(0);
   H_mass_17->SetFrameFillStyle(1000);
   H_mass_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",40,0,400);
   st_stack_3->SetMinimum(0);
   st_stack_3->SetMaximum(214.8096);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetTitle("M_{H} [GeV]");
   st_stack_3->GetXaxis()->SetRange(1,30);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/10.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_MC_H_mass_stack_1 = new TH1D("VbbHcc_MC_H_mass_stack_1","",40,0,400);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(3,0.001918328);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(7,0.001666046);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(9,0.004009344);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(10,0.003162342);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(11,0.00600637);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(12,0.03584154);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(13,179.746);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(14,0.01138);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(15,0.006668791);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(16,0.001962518);
   VbbHcc_MC_H_mass_stack_1->SetBinError(3,0.001918328);
   VbbHcc_MC_H_mass_stack_1->SetBinError(7,0.001666046);
   VbbHcc_MC_H_mass_stack_1->SetBinError(9,0.002835039);
   VbbHcc_MC_H_mass_stack_1->SetBinError(10,0.002252949);
   VbbHcc_MC_H_mass_stack_1->SetBinError(11,0.003467817);
   VbbHcc_MC_H_mass_stack_1->SetBinError(12,0.00900808);
   VbbHcc_MC_H_mass_stack_1->SetBinError(13,0.5925468);
   VbbHcc_MC_H_mass_stack_1->SetBinError(14,0.004356533);
   VbbHcc_MC_H_mass_stack_1->SetBinError(15,0.003365896);
   VbbHcc_MC_H_mass_stack_1->SetBinError(16,0.001962518);
   VbbHcc_MC_H_mass_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_mass_stack_1,"");
   
   TH1D *VbbHcc_MC_H_mass_stack_2 = new TH1D("VbbHcc_MC_H_mass_stack_2","",40,0,400);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(9,0.0003101816);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(12,0.001393558);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(13,24.8346);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(14,0.001297398);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(17,0.0002548203);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(18,0.0002428652);
   VbbHcc_MC_H_mass_stack_2->SetBinError(9,0.0003101816);
   VbbHcc_MC_H_mass_stack_2->SetBinError(12,0.0005713593);
   VbbHcc_MC_H_mass_stack_2->SetBinError(13,0.07724224);
   VbbHcc_MC_H_mass_stack_2->SetBinError(14,0.0005571406);
   VbbHcc_MC_H_mass_stack_2->SetBinError(17,0.0002548203);
   VbbHcc_MC_H_mass_stack_2->SetBinError(18,0.0002428652);
   VbbHcc_MC_H_mass_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_mass_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_mass_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_mass_stack_1","ZHcc","F");

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
   H_mass_17->Modified();
   H_mass_17->cd();
   H_mass_17->SetSelected(H_mass_17);
}
