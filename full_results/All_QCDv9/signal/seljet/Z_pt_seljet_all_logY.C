#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_seljet_all_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_all/Z_pt_seljet_all
//=========  (Thu Feb 16 10:37:21 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_seljet_all = new TCanvas("Z_pt_seljet_all", "Z_pt_seljet_all",0,0,600,600);
   Z_pt_seljet_all->SetHighLightColor(2);
   Z_pt_seljet_all->Range(37.97653,0.01108899,1705.96,4.835167);
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
   st->SetMaximum(13837.21);
   
   TH1F *st_stack_268 = new TH1F("st_stack_268","",40,0,2000);
   st_stack_268->SetMinimum(3.890257);
   st_stack_268->SetMaximum(22529.87);
   st_stack_268->SetDirectory(0);
   st_stack_268->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_268->SetLineColor(ci);
   st_stack_268->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_268->GetXaxis()->SetRange(7,30);
   st_stack_268->GetXaxis()->SetLabelFont(42);
   st_stack_268->GetXaxis()->SetTitleOffset(1);
   st_stack_268->GetXaxis()->SetTitleFont(42);
   st_stack_268->GetYaxis()->SetTitle("Events/50.0");
   st_stack_268->GetYaxis()->SetLabelFont(42);
   st_stack_268->GetYaxis()->SetTitleSize(0.037);
   st_stack_268->GetYaxis()->SetTitleFont(42);
   st_stack_268->GetZaxis()->SetLabelFont(42);
   st_stack_268->GetZaxis()->SetTitleOffset(1);
   st_stack_268->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_268);
   
   
   TH1D *VbbHcc_seljet_Z_pt_all_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(1,114.8528);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(2,138.3721);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(3,80.71366);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(4,22.77044);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(5,7.824452);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(6,3.074323);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(7,1.297568);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(8,0.5964121);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(9,0.2767689);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(10,0.09346344);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(11,0.08561025);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(12,0.03866188);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(13,0.0491206);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(14,0.01091017);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(15,0.007179171);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(16,0.01490316);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(17,0.001870372);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(19,0.001639841);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(1,0.5507649);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(2,0.6163314);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(3,0.4950563);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(4,0.2439404);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(5,0.1440545);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(6,0.08857621);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(7,0.05982869);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(8,0.03917388);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(9,0.02647809);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(10,0.01560456);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(11,0.01464582);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(12,0.0099358);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(13,0.01101044);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(14,0.005556321);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(15,0.004300101);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(16,0.006714343);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(17,0.001870372);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(19,0.001639841);
   VbbHcc_seljet_Z_pt_all_stack_1->SetEntries(163245);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_all_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(1,38.22816);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(2,47.67552);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(3,35.09305);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(4,13.50523);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(5,4.723079);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(6,1.673681);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(7,0.6065167);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(8,0.2536013);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(9,0.09620778);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(10,0.03575096);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(11,0.01720585);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(12,0.005603384);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(13,0.004326711);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(14,0.001427334);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(15,0.001321502);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(16,0.0003193896);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(17,0.0003186975);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(18,0.0004199154);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(28,0.0002612132);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(1,0.1150205);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(2,0.128023);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(3,0.1104702);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(4,0.0673366);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(5,0.04056483);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(6,0.02403257);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(7,0.01408112);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(8,0.00913294);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(9,0.005617556);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(10,0.003354931);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(11,0.002289869);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(12,0.001332002);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(13,0.001191191);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(14,0.0006491682);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(15,0.0006678972);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(16,0.0002490911);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(17,0.0003186975);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(18,0.0004199154);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(28,0.0002612132);
   VbbHcc_seljet_Z_pt_all_stack_2->SetEntries(467662);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
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
