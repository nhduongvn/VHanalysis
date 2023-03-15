#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenJet_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenJet_signal_17/GenJet_VbbHcc_nGenJet_signal_17
//=========  (Fri Mar 10 12:49:24 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenJet_signal_17 = new TCanvas("GenJet_VbbHcc_nGenJet_signal_17", "GenJet_VbbHcc_nGenJet_signal_17",0,0,600,600);
   GenJet_VbbHcc_nGenJet_signal_17->SetHighLightColor(2);
   GenJet_VbbHcc_nGenJet_signal_17->Range(-4.867058,-0.6006854,22.93266,2.141703);
   GenJet_VbbHcc_nGenJet_signal_17->SetFillColor(0);
   GenJet_VbbHcc_nGenJet_signal_17->SetFillStyle(4000);
   GenJet_VbbHcc_nGenJet_signal_17->SetBorderMode(0);
   GenJet_VbbHcc_nGenJet_signal_17->SetBorderSize(2);
   GenJet_VbbHcc_nGenJet_signal_17->SetLogy();
   GenJet_VbbHcc_nGenJet_signal_17->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenJet_signal_17->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenJet_signal_17->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenJet_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenJet_signal_17->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenJet_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenJet_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(54.69018);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",20,-0.5,19.5);
   st_stack_147->SetMinimum(0.5350585);
   st_stack_147->SetMaximum(73.69949);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Event/1.0");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *GenJet_VbbHcc_nGenJet_stack_1 = new TH1D("GenJet_VbbHcc_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(2,0.01046355);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(3,0.5581746);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(4,7.736372);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(5,33.1572);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(6,41.38793);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(7,35.03826);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(8,25.3291);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(9,16.41227);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(10,9.500351);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(11,5.366292);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(12,2.715873);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(13,1.42898);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(14,0.6581049);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(15,0.2949798);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(16,0.1346909);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(17,0.05671326);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(18,0.01507389);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(19,0.01416304);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(20,0.001931463);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(21,0.001638326);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(2,0.005133113);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(3,0.03535765);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(4,0.1276768);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(5,0.2621843);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(6,0.2857147);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(7,0.2597286);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(8,0.2188851);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(9,0.1748744);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(10,0.1327706);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(11,0.09949826);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(12,0.07092146);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(13,0.0512957);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(14,0.0349852);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(15,0.02311923);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(16,0.0158015);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(17,0.01005648);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(18,0.005108555);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(19,0.00507858);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(20,0.001931463);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(21,0.001638326);
   GenJet_VbbHcc_nGenJet_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenJet_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenJet_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenJet_stack_2 = new TH1D("GenJet_VbbHcc_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(3,0.008404897);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(4,0.2218665);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(5,1.673672);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(6,4.00492);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(7,5.212336);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(8,4.898593);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(9,3.697136);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(10,2.330921);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(11,1.395833);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(12,0.7048817);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(13,0.3618468);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(14,0.1784877);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(15,0.08688475);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(16,0.03579778);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(17,0.01426745);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(18,0.007125571);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(19,0.002675792);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(20,0.002045684);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(21,0.0003982418);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(3,0.001420039);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(4,0.007312769);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(5,0.02010723);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(6,0.03106372);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(7,0.03542782);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(8,0.03430896);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(9,0.02975221);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(10,0.02361965);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(11,0.01828296);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(12,0.01297661);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(13,0.009288358);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(14,0.006509596);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(15,0.00456844);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(16,0.002924281);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(17,0.001843731);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(18,0.001322615);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(19,0.0008455569);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(20,0.0006940607);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(21,0.0002831164);
   GenJet_VbbHcc_nGenJet_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenJet_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenJet_stack_1","ZHcc","F");

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
   GenJet_VbbHcc_nGenJet_signal_17->Modified();
   GenJet_VbbHcc_nGenJet_signal_17->cd();
   GenJet_VbbHcc_nGenJet_signal_17->SetSelected(GenJet_VbbHcc_nGenJet_signal_17);
}
