#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Mon Dec 19 11:11:21 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(-1.310117,-0.5293294,7.029799,3.881749);
   Z_dR_Bj0_tags_17->SetFillColor(0);
   Z_dR_Bj0_tags_17->SetFillStyle(4000);
   Z_dR_Bj0_tags_17->SetBorderMode(0);
   Z_dR_Bj0_tags_17->SetBorderSize(2);
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
   st->SetMaximum(3.440641);
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(0);
   st_stack_50->SetMaximum(3.440641);
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
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.3729635);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,1.304579);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,1.712458);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,1.461699);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,1.180786);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.9157443);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.6364185);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.5110393);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.363441);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.3142416);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.2793258);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.1777528);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.1539466);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.1507725);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.1523595);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.1253792);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.09363763);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.05396067);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.04761236);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.02380618);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.01110955);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.009522471);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.004761236);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.003174157);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,0.001587079);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.02432945);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.0455024);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.05213257);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.04816463);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.04328973);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.03812294);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.03178122);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.02847911);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.02401686);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.02233217);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.02105498);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.01679606);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.01563091);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.01546893);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.01555013);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.01410626);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.01219058);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.009254179);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.008692787);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.006146729);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.004199015);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.003887533);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.002748901);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.002244468);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,0.001587079);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(6340);

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
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.1410757);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.5227971);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.5813027);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.4336037);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.2938526);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.1763999);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.122089);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.08455714);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.07506378);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.05894714);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.05585628);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.04503827);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.04260973);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.03819422);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.03554491);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.03112939);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.01986982);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.00949336);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.008831033);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.006623275);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.004857068);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.001986982);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.001103879);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.001766207);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,0.0004415516);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.00558087);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.01074342);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.01132862);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.009784131);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.008054536);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.006240579);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.005191754);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.004320668);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.004070905);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.003607507);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.003511654);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.003153309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.003067116);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.002903853);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.002801331);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.002621568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.002094463);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.001447724);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.001396309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.001209239);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.00103553);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.0006623275);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.0004936697);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0006244483);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.0003122242);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.0002207758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(12653);

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
