#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.353788,0.5090679,7.264125,2.703191);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLogy();
   H_dR_tags_18->SetLeftMargin(0.15709);
   H_dR_tags_18->SetRightMargin(0.1234783);
   H_dR_tags_18->SetBottomMargin(0.12);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(238.8141);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(5.920558);
   st_stack_23->SetMaximum(304.6341);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.4421248);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.8434061);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,1.045965);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,1.51204);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,1.677971);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,1.638688);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,1.691796);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,1.74712);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,1.701241);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,1.809995);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,1.772956);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,1.872336);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,1.793153);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,1.891963);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.7235507);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.3067424);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.2171806);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.1112773);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.0763501);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.06079187);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.04004511);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.03130893);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.008224937);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.03626338);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.05151838);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.05455028);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.07623091);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.06846833);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.07178282);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.0684165);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.07040063);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.07304719);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.0716136);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.07261295);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.07502373);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.07037685);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.0754552);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.04460583);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.02937227);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.02404268);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.01683556);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.01349421);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.0128429);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.01139442);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.008831036);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.004767455);
   VbbHcc_tags_H_dR_stack_1->SetEntries(9189);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.1480548);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.2951437);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.4078109);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.5818885);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.7101697);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.6781174);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.6272344);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.5315898);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.4103301);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.4223574);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.4261705);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.4403723);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.4837647);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.4947447);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.2283088);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.1461902);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.0824386);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.05021578);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.03750316);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.02443231);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.0168775);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.01083533);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.008505032);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.003517985);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.001525745);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,0.001437833);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,0.0002658739);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.008024321);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.01723175);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.01210326);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.0159752);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.01666308);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.01554852);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.01504471);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.01405526);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.01208219);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.01230205);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.01837419);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.01247782);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.01340378);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.01421549);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.009643485);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.00765529);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.005352533);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.004283495);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.003884759);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.003000558);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.002395028);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.002318328);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.001750374);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.001128733);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0007656335);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,0.0007397321);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.0002658739);
   VbbHcc_tags_H_dR_stack_2->SetEntries(21359);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
