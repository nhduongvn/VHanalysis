#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(-1.310117,-3.311789,7.029799,0.5343648);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetFillStyle(4000);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetLogy();
   Z_dR_Bj0_tags_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_18->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",30,0,6);
   st_stack_51->SetMinimum(16.35204);
   st_stack_51->SetMaximum(1.411723);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_51->GetXaxis()->SetRange(1,30);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetTitleOffset(1);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Event/0.2");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetTitleSize(0.037);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetTitleOffset(1);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.2915508);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,1.153388);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,1.084505);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,0.6984403);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,0.4357242);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.2739296);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.1938332);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.1473773);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.1361638);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.09771756);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.088106);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.07689251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.07368866);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.08330022);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.0704848);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.06567902);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.04485396);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.02723276);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.02563084);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.003203855);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.003203855);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.003203855);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.001601927);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,0.001601927);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.02161118);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.04298422);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.0416809);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.03344922);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.02641966);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.02094792);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.0176212);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.01536515);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.01476904);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.01251145);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.01188021);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.01109848);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.0108648);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.01155166);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.01062598);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.01025734);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.008476602);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.006604915);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.006407709);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.002265467);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.002265467);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.002265467);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.001601927);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,0.001601927);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(3172);

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
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.1063092);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.5180462);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.5374518);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.3212477);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.1626277);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.0820521);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.0649667);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.05547481);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.04556106);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.03838942);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.03374894);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.03037404);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.03037404);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.02721008);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.0253117);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.02214774);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.0143433);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.008226303);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.005484202);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.002109309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.001265585);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.001054654);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.001054654);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.0002109309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,0.0006327926);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0004218617);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,0.0002109309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.0004218617);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.004735386);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.01045332);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.01064731);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.00823171);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.005856893);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.004160207);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.003701821);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.003420724);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.003100038);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.002845613);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.002668088);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.00253117);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.00253117);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.002395714);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.002310632);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.002161398);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.00173938);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.001317263);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.001075541);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.0006670219);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.000516673);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.0004716557);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.0004716557);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0002109309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.000365343);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0002983013);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.0002109309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.0002983013);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(10130);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
