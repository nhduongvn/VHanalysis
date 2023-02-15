#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(-1.310117,0.4506657,7.029799,2.934136);
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
   st->SetMaximum(369.2899);
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(5.606375);
   st_stack_50->SetMaximum(485.0525);
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
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.6589647);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,2.523661);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,2.686427);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,2.384599);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,1.728795);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,1.262621);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.9544717);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.654224);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.5609892);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.3998035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.3302725);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.289186);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.2417784);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.2085932);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.2386179);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.1848894);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.1137781);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.07585205);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.04108653);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.03950628);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.007901256);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.009481507);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,0.009481507);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.006321005);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.03226964);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.06315076);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.06515542);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.0613862);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.05226787);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.04466831);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.0388369);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.03215335);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.02977421);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.02513543);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.02284543);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.02137724);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.01954663);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.0181557);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.01941845);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.01709303);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.01340888);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.0109483);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.008057731);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.007901256);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.003533549);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.003870809);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,0.003870809);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(9885);

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
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.2665657);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.9927702);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,1.006472);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.7542313);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.4650367);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.2777764);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.1845614);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.1457392);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.1118994);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.1040104);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.08345747);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.07515325);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.06830226);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.0660186);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.05356226);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.05792198);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.03280169);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.01577803);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.01204113);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.007681409);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.00477493);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.004359719);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.001868451);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.007439122);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.01435635);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.01445508);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.0125133);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.009825693);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.007593941);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.006189992);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.005500571);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.00481985);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.004646843);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.00416248);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.003949967);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.003765626);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.003702139);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.003334641);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.003467698);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.002609563);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.001809864);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.001581078);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.001262816);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.0009956417);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.0009513686);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(23096);

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
