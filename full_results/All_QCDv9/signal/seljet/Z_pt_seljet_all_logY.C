void Z_pt_seljet_all_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_all/Z_pt_seljet_all
//=========  (Thu Feb  9 09:44:39 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_seljet_all = new TCanvas("Z_pt_seljet_all", "Z_pt_seljet_all",0,0,600,600);
   Z_pt_seljet_all->SetHighLightColor(2);
   Z_pt_seljet_all->Range(37.97653,-0.1335409,1705.96,5.515946);
   Z_pt_seljet_all->SetFillColor(0);
   Z_pt_seljet_all->SetFillStyle(4000);
   Z_pt_seljet_all->SetBorderMode(0);
   Z_pt_seljet_all->SetBorderSize(2);
   Z_pt_seljet_all->SetLogy();
   Z_pt_seljet_all->SetLeftMargin(0.15709);
   Z_pt_seljet_all->SetRightMargin(0.1234783);
   Z_pt_seljet_all->SetBottomMargin(0.12);
   Z_pt_seljet_all->SetFrameFillStyle(1000);
   Z_pt_seljet_all->SetFrameBorderMode(0);
   Z_pt_seljet_all->SetFrameFillStyle(1000);
   Z_pt_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(51280.42);
   
   TH1F *st_stack_268 = new TH1F("st_stack_268","",40,0,2000);
   st_stack_268->SetMinimum(3.502657);
   st_stack_268->SetMaximum(89330);
   st_stack_268->SetDirectory(0);
   st_stack_268->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_268->SetLineColor(ci);
   st_stack_268->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_268->GetXaxis()->SetRange(7,30);
   st_stack_268->GetXaxis()->SetLabelFont(42);
   st_stack_268->GetXaxis()->SetLabelSize(0.035);
   st_stack_268->GetXaxis()->SetTitleSize(0.035);
   st_stack_268->GetXaxis()->SetTitleFont(42);
   st_stack_268->GetYaxis()->SetTitle("Events/50.0");
   st_stack_268->GetYaxis()->SetLabelFont(42);
   st_stack_268->GetYaxis()->SetLabelSize(0.035);
   st_stack_268->GetYaxis()->SetTitleSize(0.037);
   st_stack_268->GetYaxis()->SetTitleOffset(0);
   st_stack_268->GetYaxis()->SetTitleFont(42);
   st_stack_268->GetZaxis()->SetLabelFont(42);
   st_stack_268->GetZaxis()->SetLabelSize(0.035);
   st_stack_268->GetZaxis()->SetTitleSize(0.035);
   st_stack_268->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_268);
   
   
   TH1D *VbbHcc_seljet_Z_pt_all_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(1,351.5153);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(2,414.5644);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(3,101.5271);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(4,24.40848);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(5,8.145192);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(6,3.169366);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(7,1.33509);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(8,0.6036104);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(9,0.2803591);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(10,0.09707477);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(11,0.08808795);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(12,0.04150576);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(13,0.0491206);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(14,0.01091017);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(15,0.007179171);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(16,0.01490316);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(17,0.001870372);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(19,0.001639841);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(1,0.9692556);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(2,1.059733);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(3,0.5481936);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(4,0.2536014);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(5,0.1467966);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(6,0.08987834);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(7,0.06061078);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(8,0.03940934);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(9,0.02672038);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(10,0.01581386);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(11,0.01485392);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(12,0.01033479);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(13,0.01101044);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(14,0.005556321);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(15,0.004300101);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(16,0.006714343);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(17,0.001870372);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(19,0.001639841);
   VbbHcc_seljet_Z_pt_all_stack_1->SetEntries(402010);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_all_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(1,74.89843);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(2,98.23985);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(3,42.64631);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(4,14.2239);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(5,4.817955);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(6,1.696476);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(7,0.611676);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(8,0.2561397);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(9,0.09626798);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(10,0.03700913);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(11,0.01745273);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(12,0.00578348);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(13,0.004326711);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(14,0.001427334);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(15,0.001321502);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(16,0.0003193896);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(17,0.0003186975);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(18,0.0004199154);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(28,0.0002612132);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(1,0.1608948);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(2,0.1844179);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(3,0.1214149);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(4,0.06911133);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(5,0.04094294);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(6,0.02418165);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(7,0.01414145);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(8,0.009184186);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(9,0.005617878);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(10,0.003415834);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(11,0.002303139);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(12,0.001344122);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(13,0.001191191);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(14,0.0006491682);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(15,0.0006678972);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(16,0.0002490911);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(17,0.0003186975);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(18,0.0004199154);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(28,0.0002612132);
   VbbHcc_seljet_Z_pt_all_stack_2->SetEntries(782516);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_pt_all_stack_1","ZHcc","F");

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
   Z_pt_seljet_all->Modified();
   Z_pt_seljet_all->cd();
   Z_pt_seljet_all->SetSelected(Z_pt_seljet_all);
}
