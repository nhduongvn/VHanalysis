#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2183529,-194654.7,1.171633,1427468);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetFillStyle(4000);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15709);
   Sphericity_tags_17->SetRightMargin(0.1234783);
   Sphericity_tags_17->SetBottomMargin(0.12);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1265256);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",25,0,1);
   st_stack_58->SetMinimum(0);
   st_stack_58->SetMaximum(1265256);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetTitle("Sphericity");
   st_stack_58->GetXaxis()->SetRange(1,25);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetTitleOffset(1);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Event/0.04");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetTitleSize(0.037);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetTitleOffset(1);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,344886.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,835354.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,955770.6);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,832816);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,866081.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,672343.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,504844.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,445881.8);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,417228);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,353444.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,297667.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,268420.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,211716.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,156545.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,142199);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,95813.23);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,87800.64);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,77165.18);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,30278.38);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,7929.292);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,17401.96);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,1265.721);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(23,304.9627);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,9601.724);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,38047.96);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,41304.14);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,31873.59);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,56622.95);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,32068.29);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,15149.36);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,14898.59);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,28080.44);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,27193.55);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,19641.72);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,22711.44);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,20774.67);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,7988.425);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,19826.4);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,5689.018);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,17748.05);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,22376.9);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,3885.843);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,1287.311);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,11680.71);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,582.0121);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(23,272.9369);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(268271);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,24387.91);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,69149.29);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,94391.55);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,100914.1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,98250.61);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,92153.77);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,85007.26);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,77790.92);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,71040.58);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,64402.55);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,58065.82);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,52233.65);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,46429.63);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,40705.11);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,35052.5);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,29370.1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,23501.54);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,17512.45);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,11325.57);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,5849.373);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,2544.283);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(22,927.1539);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(23,245.4547);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(24,38.61655);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(25,1.061536);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,41.48605);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,70.93536);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,83.61794);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,86.90091);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,85.94931);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,83.34194);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,80.12852);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,76.68976);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,73.32479);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,69.83103);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,66.32287);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,62.94527);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,59.36132);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,55.60033);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,51.62363);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,47.26087);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,42.30763);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,36.53712);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,29.39129);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,21.16443);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,13.9741);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(22,8.445167);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(23,4.355792);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(24,1.714078);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(25,0.2885903);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(1.634337e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
