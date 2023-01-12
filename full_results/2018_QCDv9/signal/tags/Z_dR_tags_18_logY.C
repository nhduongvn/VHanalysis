#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.310117,0.5473216,7.029799,2.554956);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLogy();
   Z_dR_tags_18->SetLeftMargin(0.15709);
   Z_dR_tags_18->SetRightMargin(0.1234783);
   Z_dR_tags_18->SetBottomMargin(0.12);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(180.6381);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(6.14098);
   st_stack_19->SetMaximum(226.0436);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.429176);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.74394);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,1.090049);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,1.20921);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,1.266344);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,1.178793);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,1.067442);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.9627003);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.7849379);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.7820752);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.7580041);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.7468561);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.924293);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.7962596);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.2896472);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.1223826);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.06497053);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.04088759);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.02408494);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.01796038);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,0.00355944);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,0.01212997);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,0.002061483);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.03380674);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.04413181);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.05467432);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.05777041);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.0591098);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.055725);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.05336928);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.05050216);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.04531797);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.04522955);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.044987);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.04369626);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.04883978);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.04622935);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.02889333);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.01782165);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.01282375);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.01003508);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.007357819);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.006568205);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,0.002613715);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,0.00567027);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,0.002061483);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.1744009);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.3748492);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.5426663);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.5971708);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.4817005);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.3297629);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.2359157);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.1958242);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.1715935);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.1636241);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.1732505);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.1773594);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.1955648);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.1958862);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.08886899);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.04812159);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.02699829);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.01321332);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.01013951);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.005518299);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.002904495);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.002000862);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.001256337);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,0.000400751);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.008341586);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.01195853);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.01435709);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.01523689);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.01361803);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.01120765);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.009520132);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.008614117);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.008172756);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.007852206);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.008169851);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.008195765);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.008571192);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.008643262);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.00584563);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.004253103);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.003148391);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.002244547);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.001959238);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.00147922);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.001077556);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0008968449);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0006957163);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,0.000400751);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(12320);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
