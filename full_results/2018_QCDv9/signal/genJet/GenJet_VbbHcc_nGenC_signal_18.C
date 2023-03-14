#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenC_signal_18()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenC_signal_18/GenJet_VbbHcc_nGenC_signal_18
//=========  (Thu Mar  9 15:52:39 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenC_signal_18 = new TCanvas("GenJet_VbbHcc_nGenC_signal_18", "GenJet_VbbHcc_nGenC_signal_18",0,0,600,600);
   GenJet_VbbHcc_nGenC_signal_18->SetHighLightColor(2);
   GenJet_VbbHcc_nGenC_signal_18->Range(-4.867058,-41.39071,22.93266,303.5319);
   GenJet_VbbHcc_nGenC_signal_18->SetFillColor(0);
   GenJet_VbbHcc_nGenC_signal_18->SetFillStyle(4000);
   GenJet_VbbHcc_nGenC_signal_18->SetBorderMode(0);
   GenJet_VbbHcc_nGenC_signal_18->SetBorderSize(2);
   GenJet_VbbHcc_nGenC_signal_18->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenC_signal_18->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenC_signal_18->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenC_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenC_signal_18->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenC_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenC_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(269.0396);
   
   TH1F *st_stack_167 = new TH1F("st_stack_167","",20,-0.5,19.5);
   st_stack_167->SetMinimum(0);
   st_stack_167->SetMaximum(269.0396);
   st_stack_167->SetDirectory(0);
   st_stack_167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_167->SetLineColor(ci);
   st_stack_167->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_167->GetXaxis()->SetLabelFont(42);
   st_stack_167->GetXaxis()->SetTitleOffset(1);
   st_stack_167->GetXaxis()->SetTitleFont(42);
   st_stack_167->GetYaxis()->SetTitle("Event/1.0");
   st_stack_167->GetYaxis()->SetLabelFont(42);
   st_stack_167->GetYaxis()->SetTitleSize(0.037);
   st_stack_167->GetYaxis()->SetTitleFont(42);
   st_stack_167->GetZaxis()->SetLabelFont(42);
   st_stack_167->GetZaxis()->SetTitleOffset(1);
   st_stack_167->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_167);
   
   
   TH1D *GenJet_VbbHcc_nGenC_stack_1 = new TH1D("GenJet_VbbHcc_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(1,0.9041514);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(2,31.16042);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(3,195.8178);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(4,30.40444);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(5,5.362135);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(6,0.8599111);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(7,0.08510418);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(8,0.01510238);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(1,0.05281774);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(2,0.3095324);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(3,0.7972313);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(4,0.3030587);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(5,0.131228);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(6,0.1143287);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(7,0.01510385);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(8,0.00622154);
   GenJet_VbbHcc_nGenC_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenC_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenC_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenC_stack_2 = new TH1D("GenJet_VbbHcc_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(1,0.03041482);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(2,3.006351);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(3,27.48504);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(4,5.162917);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(5,1.006251);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(6,0.1517727);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(7,0.02090448);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(8,0.001852725);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(1,0.003316958);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(2,0.03544754);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(3,0.1059965);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(4,0.04873622);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(5,0.01975949);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(6,0.007666155);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(7,0.002681565);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(8,0.0008370283);
   GenJet_VbbHcc_nGenC_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenC_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenC_stack_1","ZHcc","F");

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
   GenJet_VbbHcc_nGenC_signal_18->Modified();
   GenJet_VbbHcc_nGenC_signal_18->cd();
   GenJet_VbbHcc_nGenC_signal_18->SetSelected(GenJet_VbbHcc_nGenC_signal_18);
}
