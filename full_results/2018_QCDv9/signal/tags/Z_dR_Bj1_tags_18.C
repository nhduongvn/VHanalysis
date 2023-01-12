#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(-1.310117,-0.7472829,7.029799,5.480075);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetFillStyle(4000);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_18->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.857339);
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",30,0,6);
   st_stack_55->SetMinimum(0);
   st_stack_55->SetMaximum(4.857339);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_55->GetXaxis()->SetRange(1,30);
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetTitleOffset(1);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Events/0.2");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetTitleSize(0.037);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetTitleOffset(1);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.3949818);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,1.723979);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,2.367567);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,2.021377);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,1.786712);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,1.287176);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.9061347);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.6133835);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.478625);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.4158926);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.3415431);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.2857809);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.2369891);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.2509296);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.2602233);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.1789035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.1115243);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.05576213);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.04414502);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.02323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.01858738);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.004646845);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.009293689);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.03029372);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.06328927);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.07416777);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.06853111);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.06443047);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.05468687);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.04588391);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.03775114);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.03334738);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.03108527);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.02817);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.025768);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.02346541);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.02414571);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.02458879);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.02038795);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.01609714);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.0113824);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.01012756);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.007347306);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.006571631);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.003285815);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.004646845);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.2123306);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.7264666);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.8706587);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.6875795);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.4831639);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.3055909);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.2051038);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.1359329);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.1025519);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.08500106);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.07811839);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.0671061);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.05953516);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.04989941);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.04989941);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.04129606);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.02925138);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.01720669);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.009979882);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.009635748);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.005850276);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.003097205);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.002408937);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.0006882677);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.0003441339);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.0006882677);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,0.0003441339);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.008548108);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.01581144);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.01730963);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.01538244);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.01289469);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.01025496);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.008401378);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.006839525);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.005940672);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.005408488);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.005184899);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.004805568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.004526374);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.00414392);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.00414392);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.003769798);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.003172757);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.002433394);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.001853218);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.001820985);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.0014189);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.001032402);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0009104926);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0004866788);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0003441339);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.0004866788);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.0003441339);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(12320);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}
