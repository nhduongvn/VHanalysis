#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(-1.310117,0.5155368,7.029799,2.677953);
   Z_dR_Bj0_tags_17->SetFillColor(0);
   Z_dR_Bj0_tags_17->SetFillStyle(4000);
   Z_dR_Bj0_tags_17->SetBorderMode(0);
   Z_dR_Bj0_tags_17->SetBorderSize(2);
   Z_dR_Bj0_tags_17->SetLogy();
   Z_dR_Bj0_tags_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_17->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(227.7202);
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(5.956988);
   st_stack_50->SetMaximum(289.5418);
   st_stack_50->SetDirectory(0);
   st_stack_50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_50->SetLineColor(ci);
   st_stack_50->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_50->GetXaxis()->SetRange(1,30);
   st_stack_50->GetXaxis()->SetLabelFont(42);
   st_stack_50->GetXaxis()->SetTitleOffset(1);
   st_stack_50->GetXaxis()->SetTitleFont(42);
   st_stack_50->GetYaxis()->SetTitle("Events/0.2");
   st_stack_50->GetYaxis()->SetLabelFont(42);
   st_stack_50->GetYaxis()->SetTitleSize(0.037);
   st_stack_50->GetYaxis()->SetTitleFont(42);
   st_stack_50->GetZaxis()->SetLabelFont(42);
   st_stack_50->GetZaxis()->SetTitleOffset(1);
   st_stack_50->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_50);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.3777247);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,1.29823);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,1.712458);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,1.466461);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,1.183961);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.9205056);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.6411797);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.5031039);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.363441);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.3158286);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.2809129);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.1841011);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.1539466);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.1523595);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.1587079);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.1253792);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.09522471);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.05396067);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.0444382);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.02380618);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.01110955);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.009522471);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.004761236);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.003174157);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,0.001587079);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.02448426);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.04539156);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.05213257);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.04824301);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.04334788);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.03822191);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.03189988);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.02825713);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.02401686);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.0223885);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.02111471);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.01709336);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.01563091);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.01555013);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.01587079);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.01410626);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.01229346);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.009254179);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.00839803);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.006146729);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.004199015);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.003887533);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.002748901);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.002244468);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,0.001587079);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(6355);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.1353356);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.511096);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.5647445);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.4230065);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.2903202);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.1735298);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.1216475);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.08279093);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.07373912);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.05718094);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.05497318);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.04459672);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.04216818);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.03642801);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.03532413);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.02892163);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.01942827);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.00949336);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.008168705);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.006181723);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.004636292);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.001986982);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.001103879);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.001766207);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.005466152);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.01062251);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.01116611);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.009663829);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.008005978);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.006189603);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.005182357);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.004275305);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.004034825);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.003553051);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.003483784);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.003137814);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.003051183);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.002835917);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.002792618);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.002526895);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.002071061);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.001447724);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.001342927);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.001168236);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.001011722);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.0006623275);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.0004936697);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0006244483);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(12362);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_17->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->SetSelected(Z_dR_Bj0_tags_17);
}
