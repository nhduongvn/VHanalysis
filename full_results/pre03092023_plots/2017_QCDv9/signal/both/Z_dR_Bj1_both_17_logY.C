#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(-1.310117,-3.437122,7.029799,0.4090315);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetLogy();
   Z_dR_Bj1_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_17->SetBottomMargin(0.12);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_182 = new TH1F("st_stack_182","",30,0,6);
   st_stack_182->SetMinimum(18.02471);
   st_stack_182->SetMaximum(1.057831);
   st_stack_182->SetDirectory(0);
   st_stack_182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_182->SetLineColor(ci);
   st_stack_182->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_182->GetXaxis()->SetRange(1,30);
   st_stack_182->GetXaxis()->SetLabelFont(42);
   st_stack_182->GetXaxis()->SetTitleOffset(1);
   st_stack_182->GetXaxis()->SetTitleFont(42);
   st_stack_182->GetYaxis()->SetTitle("Event/0.2");
   st_stack_182->GetYaxis()->SetLabelFont(42);
   st_stack_182->GetYaxis()->SetTitleSize(0.037);
   st_stack_182->GetYaxis()->SetTitleFont(42);
   st_stack_182->GetZaxis()->SetLabelFont(42);
   st_stack_182->GetZaxis()->SetTitleOffset(1);
   st_stack_182->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_182);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.2383847);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,0.7931304);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,0.8766764);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,0.6126709);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,0.358691);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,0.2049663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.1559526);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.1125087);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.104711);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.07463446);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.07129262);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.07017867);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.05235552);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.05346946);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.04901367);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.04901367);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.02562078);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.02005105);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.01336737);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.002227894);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.003341841);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.001113947);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.001113947);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,0.001113947);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.01629564);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.02972382);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.03125014);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.02612438);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.01998907);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.01511031);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.0131804);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.01119503);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.01080012);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.00911805);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.008911577);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.008841681);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.007636837);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.007717652);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.007389089);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.007389089);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.005342303);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.004726077);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.003858826);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.001575359);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.001929413);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.001113947);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.001113947);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,0.001113947);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.08224584);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.370399);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.4103512);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.264738);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.126442);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.06936749);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.0560501);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.04053754);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.03848871);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.03365933);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.0286836);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.02268346);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.02297615);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.02092732);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.02004925);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.01697601);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.009073385);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.005707452);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.004683037);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.002195174);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.002048829);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.0008780695);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.0008780695);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.0008780695);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0004390348);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,0.0001463449);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.0001463449);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.003469332);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.007362473);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.007749375);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.006224392);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.004301645);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.003186154);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.002864027);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.002435665);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.002373316);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.002219431);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.002048829);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.00182198);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.001833697);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.001750031);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.001712923);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.001576183);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.001152321);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.0009139237);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.0008278519);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.0005667914);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0005475726);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0003584704);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0003584704);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0003584704);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0002534768);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.0001463449);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.0001463449);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}
