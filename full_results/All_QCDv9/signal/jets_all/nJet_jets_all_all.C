void nJet_jets_all_all()
{
//=========Macro generated from canvas: nJet_jets_all_all/nJet_jets_all_all
//=========  (Thu Dec 15 10:04:53 2022) by ROOT version 6.14/09
   TCanvas *nJet_jets_all_all = new TCanvas("nJet_jets_all_all", "nJet_jets_all_all",0,0,600,600);
   nJet_jets_all_all->SetHighLightColor(2);
   nJet_jets_all_all->Range(-3.556941,-118.1041,15.90286,866.0964);
   nJet_jets_all_all->SetFillColor(0);
   nJet_jets_all_all->SetFillStyle(4000);
   nJet_jets_all_all->SetBorderMode(0);
   nJet_jets_all_all->SetBorderSize(2);
   nJet_jets_all_all->SetLeftMargin(0.15709);
   nJet_jets_all_all->SetRightMargin(0.1234783);
   nJet_jets_all_all->SetBottomMargin(0.12);
   nJet_jets_all_all->SetFrameFillStyle(1000);
   nJet_jets_all_all->SetFrameBorderMode(0);
   nJet_jets_all_all->SetFrameFillStyle(1000);
   nJet_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(731.1203);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",14,-0.5,13.5);
   st_stack_48->SetMinimum(0);
   st_stack_48->SetMaximum(767.6764);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_48->GetXaxis()->SetRange(1,14);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetLabelSize(0.035);
   st_stack_48->GetXaxis()->SetTitleSize(0.035);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/1.0");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.035);
   st_stack_48->GetYaxis()->SetTitleSize(0.037);
   st_stack_48->GetYaxis()->SetTitleOffset(0);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetLabelSize(0.035);
   st_stack_48->GetZaxis()->SetTitleSize(0.035);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_jets_all_nJet_all_stack_1 = new TH1D("VbbHcc_jets_all_nJet_all_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(1,0.01738431);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(2,0.3106991);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(3,7.705283);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(4,66.68171);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(5,239.5934);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(6,387.2253);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(7,436.127);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(8,398.7269);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(9,314.661);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(10,223.6797);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(11,144.2368);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(12,87.89867);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(13,49.7512);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(14,27.30072);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(15,26.4304);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(1,0.00669576);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(2,0.02841323);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(3,0.134637);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(4,0.4014045);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(5,0.7528582);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(6,0.943408);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(7,0.986175);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(8,0.9327616);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(9,0.820122);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(10,0.6841134);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(11,0.5444199);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(12,0.4199586);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(13,0.3126308);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(14,0.2287415);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(15,0.2209036);
   VbbHcc_jets_all_nJet_all_stack_1->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_all_stack_2 = new TH1D("VbbHcc_jets_all_nJet_all_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(2,0.000732536);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(3,0.1441594);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(4,2.290263);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(5,13.35504);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(6,33.36611);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(7,51.28655);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(8,58.74342);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(9,54.43895);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(10,43.64057);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(11,30.92917);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(12,19.98605);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(13,11.99834);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(14,6.75715);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(15,6.830138);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(2,0.0004494633);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(3,0.00672338);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(4,0.02664417);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(5,0.06394467);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(6,0.1007268);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(7,0.1238833);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(8,0.1318517);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(9,0.1262051);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(10,0.1124659);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(11,0.09377614);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(12,0.074824);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(13,0.05749727);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(14,0.04277601);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(15,0.0422026);
   VbbHcc_jets_all_nJet_all_stack_2->SetEntries(1387055);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_all->Modified();
   nJet_jets_all_all->cd();
   nJet_jets_all_all->SetSelected(nJet_jets_all_all);
}
