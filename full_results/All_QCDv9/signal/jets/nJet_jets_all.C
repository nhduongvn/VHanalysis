void nJet_jets_all()
{
//=========Macro generated from canvas: nJet_jets_all/nJet_jets_all
//=========  (Thu Dec 15 10:04:51 2022) by ROOT version 6.14/09
   TCanvas *nJet_jets_all = new TCanvas("nJet_jets_all", "nJet_jets_all",0,0,600,600);
   nJet_jets_all->SetHighLightColor(2);
   nJet_jets_all->Range(-3.556941,-191.9755,15.90286,1407.82);
   nJet_jets_all->SetFillColor(0);
   nJet_jets_all->SetFillStyle(4000);
   nJet_jets_all->SetBorderMode(0);
   nJet_jets_all->SetBorderSize(2);
   nJet_jets_all->SetLeftMargin(0.15709);
   nJet_jets_all->SetRightMargin(0.1234783);
   nJet_jets_all->SetBottomMargin(0.12);
   nJet_jets_all->SetFrameFillStyle(1000);
   nJet_jets_all->SetFrameBorderMode(0);
   nJet_jets_all->SetFrameFillStyle(1000);
   nJet_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1188.42);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",14,-0.5,13.5);
   st_stack_4->SetMinimum(0);
   st_stack_4->SetMaximum(1247.84);
   st_stack_4->SetDirectory(0);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_4->GetXaxis()->SetRange(1,14);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetLabelSize(0.035);
   st_stack_4->GetXaxis()->SetTitleSize(0.035);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/1.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetLabelSize(0.035);
   st_stack_4->GetYaxis()->SetTitleSize(0.037);
   st_stack_4->GetYaxis()->SetTitleOffset(0);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetLabelSize(0.035);
   st_stack_4->GetZaxis()->SetTitleSize(0.035);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VbbHcc_jets_nJet_all_stack_1 = new TH1D("VbbHcc_jets_nJet_all_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(1,94.7138);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(2,243.1769);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(3,515.3639);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(4,713.4151);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(5,538.1477);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(6,208.8005);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(7,68.13512);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(8,20.50025);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(9,5.984617);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(10,1.547881);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(11,0.4360353);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(12,0.09449575);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(13,0.02530165);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(14,0.001184486);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(15,0.003472884);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(1,0.4806326);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(2,0.7503813);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(3,1.072155);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(4,1.248343);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(5,1.075108);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(6,0.6603668);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(7,0.373745);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(8,0.2043524);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(9,0.1101219);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(10,0.05599256);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(11,0.02960005);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(12,0.01399752);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(13,0.006907809);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(14,0.001184486);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(15,0.002606242);
   VbbHcc_jets_nJet_all_stack_1->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_2 = new TH1D("VbbHcc_jets_nJet_all_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(1,0.6745405);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(2,5.861128);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(3,29.78256);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(4,78.86456);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(5,105.8278);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(6,69.17842);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(7,29.79959);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(8,9.964845);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(9,2.850546);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(10,0.7412211);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(11,0.1746721);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(12,0.03655219);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(13,0.008646081);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(14,0.001384737);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(15,0.0001890315);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(1,0.01378269);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(2,0.04099251);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(3,0.09334966);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(4,0.1521616);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(5,0.1764322);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(6,0.1421728);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(7,0.09288799);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(8,0.05318078);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(9,0.02837621);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(10,0.01442302);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(11,0.006866222);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(12,0.003076297);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(13,0.001454647);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(14,0.000574434);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(15,0.0001890315);
   VbbHcc_jets_nJet_all_stack_2->SetEntries(1387055);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_1","ZHcc","F");

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
   nJet_jets_all->Modified();
   nJet_jets_all->cd();
   nJet_jets_all->SetSelected(nJet_jets_all);
}
