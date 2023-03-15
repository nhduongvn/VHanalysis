#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2183529,0.4394083,1.171633,2.979284);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15709);
   Aplanarity_both_17->SetRightMargin(0.1234783);
   Aplanarity_both_17->SetBottomMargin(0.12);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(402.1895);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(5.548726);
   st_stack_190->SetMaximum(531.2465);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("Aplanarity");
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,3.064039);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,2.296633);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,1.544767);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,1.136217);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.7585691);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.5985984);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.4192335);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.3623492);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.2334919);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.1739683);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.1231909);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.09343485);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.06226102);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.0401673);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.04277164);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.01692383);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.008744106);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.009658568);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,0.003464206);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,0.007487336);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.07408172);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.06483013);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.05325997);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.04529857);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.03784833);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.03280423);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.02764298);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.02617398);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.02117265);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.01802382);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.01481552);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.01264745);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.0107226);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.008390394);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.008692913);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.005713333);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.003927663);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.0043252);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,0.002482452);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,0.003802462);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(7351);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,0.9578559);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.700377);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.4777544);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.3157107);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.2185429);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.1595503);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.109042);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.06983282);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.0427859);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.02917236);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.02057099);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.01382648);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.009839637);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.005049521);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.004992147);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.00292471);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.001628116);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.0005053749);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0007626622);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.01516356);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.0131163);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.01080637);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.008864985);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.007310967);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.006289269);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.005212676);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.004160447);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.003253128);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.002674739);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.002228651);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.001868441);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.001576253);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001087128);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.001149372);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.0008423037);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0006695444);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.000346124);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0004431618);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(14825);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
