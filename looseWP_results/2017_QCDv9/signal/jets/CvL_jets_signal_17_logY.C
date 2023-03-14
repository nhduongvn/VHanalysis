#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_signal_17_logY()
{
//=========Macro generated from canvas: CvL_jets_signal_17/CvL_jets_signal_17
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_signal_17 = new TCanvas("CvL_jets_signal_17", "CvL_jets_signal_17",0,0,600,600);
   CvL_jets_signal_17->SetHighLightColor(2);
   CvL_jets_signal_17->Range(-0.2183529,0.3795096,1.171633,3.222857);
   CvL_jets_signal_17->SetFillColor(0);
   CvL_jets_signal_17->SetFillStyle(4000);
   CvL_jets_signal_17->SetBorderMode(0);
   CvL_jets_signal_17->SetBorderSize(2);
   CvL_jets_signal_17->SetLogy();
   CvL_jets_signal_17->SetLeftMargin(0.15709);
   CvL_jets_signal_17->SetRightMargin(0.1234783);
   CvL_jets_signal_17->SetBottomMargin(0.12);
   CvL_jets_signal_17->SetFrameFillStyle(1000);
   CvL_jets_signal_17->SetFrameBorderMode(0);
   CvL_jets_signal_17->SetFrameFillStyle(1000);
   CvL_jets_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(637.8002);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",20,0,1);
   st_stack_15->SetMinimum(5.256677);
   st_stack_15->SetMaximum(868.0058);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_15->GetXaxis()->SetRange(1,20);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetTitleOffset(1);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Event/0.05");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,320.8791);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,436.3611);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,175.47);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,90.63031);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,57.43715);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,43.77486);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,35.04522);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,29.97406);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,27.00799);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,25.71115);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,25.03506);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,24.49634);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,24.36621);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,25.10298);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,26.69636);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,29.99);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,33.89851);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,41.1502);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,53.89002);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,191.8176);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,0.78206);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,0.9120112);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,0.5794849);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.4167943);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.3322164);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.2892789);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.2593605);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.2404376);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.2280747);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.2230652);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.2194552);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.2169733);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.2164049);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.2192439);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.2262884);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.2392235);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.2552092);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.2816936);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.3223094);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.6077379);
   VbbHcc_jets_CvL_stack_1->SetEntries(1021879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,74.1118);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,93.01299);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,35.18925);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,17.90216);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,11.26481);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,8.44432);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,6.921959);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,5.769602);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,5.214603);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,4.908798);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,4.932905);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,4.817128);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,4.825485);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,4.923293);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,5.302237);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,6.0862);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,6.990884);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,8.702233);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,11.34589);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,39.33671);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,0.1336043);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,0.1494402);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,0.09185536);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,0.06556998);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,0.05201652);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,0.04503035);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,0.0407863);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,0.03723069);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,0.0353804);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,0.03434157);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,0.03446418);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,0.03405604);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,0.03408746);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,0.03442133);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,0.03572688);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,0.03832018);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,0.0409921);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,0.04579342);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,0.05230523);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,0.09742867);
   VbbHcc_jets_CvL_stack_2->SetEntries(1564569);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","ZHcc","F");

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
   CvL_jets_signal_17->Modified();
   CvL_jets_signal_17->cd();
   CvL_jets_signal_17->SetSelected(CvL_jets_signal_17);
}
