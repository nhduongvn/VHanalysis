#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,0.518349,7.029799,2.667003);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetLogy();
   Z_dR_algo_all->SetLeftMargin(0.15709);
   Z_dR_algo_all->SetRightMargin(0.1234783);
   Z_dR_algo_all->SetBottomMargin(0.12);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(223.0695);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",30,0,6);
   st_stack_84->SetMinimum(5.97293);
   st_stack_84->SetMaximum(283.2286);
   st_stack_84->SetDirectory(0);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_84->GetXaxis()->SetRange(1,30);
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Events/0.2");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetTitleSize(0.037);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,0.7490942);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,1.281482);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,1.52893);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,1.612743);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,1.451832);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,1.257966);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,1.039361);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,0.6479387);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,0.4798302);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,0.3590937);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,0.220793);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,0.1774744);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,0.1634209);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,0.09358128);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,0.02602379);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,0.02221642);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,0.004361843);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,0.01254559);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,0.003189074);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,0.04407275);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,0.05860575);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,0.06199731);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,0.07513435);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,0.06126994);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,0.05839805);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,0.05147902);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,0.0408483);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,0.03432934);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,0.0297946);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,0.02327441);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,0.02088149);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,0.01981906);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,0.01523328);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,0.007863571);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,0.006895586);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,0.003105068);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,0.00567035);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,0.003189074);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(5082);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,0.1489409);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,0.3938015);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,0.5752263);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,0.6179521);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,0.5160572);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,0.2998978);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,0.1584946);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,0.1031991);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,0.06431316);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,0.04357902);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,0.0387006);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,0.03902546);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,0.02795822);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,0.03064285);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,0.01188133);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,0.004550281);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,0.004277363);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,0.002637106);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,0.0006157111);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,0.0008976774);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,0.0003035629);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,0.007384258);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,0.01158113);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,0.01383206);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,0.01440911);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,0.0128792);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,0.009857082);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,0.007072996);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,0.005737447);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,0.004513599);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,0.003718931);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,0.003582329);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,0.003524112);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,0.002989478);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,0.003097433);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,0.002011606);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,0.001140471);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,0.001246363);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,0.0009095031);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,0.0003573105);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,0.0005442914);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,0.0003035629);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(10346);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
