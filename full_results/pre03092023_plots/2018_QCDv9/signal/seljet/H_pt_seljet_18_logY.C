#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_seljet_18_logY()
{
//=========Macro generated from canvas: H_pt_seljet_18/H_pt_seljet_18
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *H_pt_seljet_18 = new TCanvas("H_pt_seljet_18", "H_pt_seljet_18",0,0,600,600);
   H_pt_seljet_18->SetHighLightColor(2);
   H_pt_seljet_18->Range(37.97653,0.108445,1705.96,4.391245);
   H_pt_seljet_18->SetFillColor(0);
   H_pt_seljet_18->SetFillStyle(4000);
   H_pt_seljet_18->SetBorderMode(0);
   H_pt_seljet_18->SetBorderSize(2);
   H_pt_seljet_18->SetLogy();
   H_pt_seljet_18->SetLeftMargin(0.15709);
   H_pt_seljet_18->SetRightMargin(0.1234783);
   H_pt_seljet_18->SetBottomMargin(0.12);
   H_pt_seljet_18->SetFrameFillStyle(1000);
   H_pt_seljet_18->SetFrameBorderMode(0);
   H_pt_seljet_18->SetFrameFillStyle(1000);
   H_pt_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5907.914);
   
   TH1F *st_stack_271 = new TH1F("st_stack_271","",40,0,2000);
   st_stack_271->SetMinimum(4.191612);
   st_stack_271->SetMaximum(9182.593);
   st_stack_271->SetDirectory(0);
   st_stack_271->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_271->SetLineColor(ci);
   st_stack_271->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_271->GetXaxis()->SetRange(7,30);
   st_stack_271->GetXaxis()->SetLabelFont(42);
   st_stack_271->GetXaxis()->SetTitleOffset(1);
   st_stack_271->GetXaxis()->SetTitleFont(42);
   st_stack_271->GetYaxis()->SetTitle("Events/50.0");
   st_stack_271->GetYaxis()->SetLabelFont(42);
   st_stack_271->GetYaxis()->SetTitleSize(0.037);
   st_stack_271->GetYaxis()->SetTitleFont(42);
   st_stack_271->GetZaxis()->SetLabelFont(42);
   st_stack_271->GetZaxis()->SetTitleOffset(1);
   st_stack_271->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_271);
   
   
   TH1D *VbbHcc_seljet_H_pt_stack_1 = new TH1D("VbbHcc_seljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(1,43.89752);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(2,59.07914);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(3,34.91608);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(4,15.31782);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(5,6.378052);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(6,2.832248);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(7,1.387044);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(8,0.7187609);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(9,0.4021901);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(10,0.160356);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(11,0.1082014);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(12,0.05616712);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(13,0.01876255);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(14,0.02813022);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(15,0.01395651);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(16,0.007400372);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(17,0.009975564);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(18,0.002444891);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(19,0.003272863);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(1,0.3745472);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(2,0.4608485);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(3,0.3180889);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(4,0.2169455);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(5,0.1383406);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(6,0.0898269);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(7,0.06195882);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(8,0.04444411);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(9,0.0344014);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(10,0.02064309);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(11,0.01679277);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(12,0.01239266);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(13,0.007138122);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(14,0.008972171);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(15,0.005590038);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(16,0.004285545);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(17,0.005759404);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(18,0.002444891);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(19,0.003272863);
   VbbHcc_seljet_H_pt_stack_1->SetEntries(65138);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_pt_stack_2 = new TH1D("VbbHcc_seljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(1,13.75406);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(2,20.68788);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(3,14.17423);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(4,7.934423);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(5,3.854097);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(6,1.707669);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(7,0.7758501);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(8,0.3453611);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(9,0.1486452);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(10,0.06160102);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(11,0.03032838);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(12,0.009998574);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(13,0.007352796);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(14,0.003975033);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(15,0.001757455);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(16,0.0008115611);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(17,0.0003035629);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(18,0.0003740668);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(19,0.0007440045);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(20,0.0003186975);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(1,0.07364713);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(2,0.09119354);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(3,0.07402415);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(4,0.0555232);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(5,0.03955216);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(6,0.02554934);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(7,0.01724115);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(8,0.01132181);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(9,0.0072898);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(10,0.004660001);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(11,0.003261863);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(12,0.001841088);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(13,0.001608242);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(14,0.001162412);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(15,0.0008033538);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(16,0.0005756103);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(17,0.0003035629);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(18,0.0003740668);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(19,0.0005304363);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(20,0.0003186975);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_seljet_H_pt_stack_2->SetEntries(186422);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_seljet_18->Modified();
   H_pt_seljet_18->cd();
   H_pt_seljet_18->SetSelected(H_pt_seljet_18);
}
