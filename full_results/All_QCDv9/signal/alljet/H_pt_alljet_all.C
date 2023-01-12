#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_alljet_all()
{
//=========Macro generated from canvas: H_pt_alljet_all/H_pt_alljet_all
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_pt_alljet_all = new TCanvas("H_pt_alljet_all", "H_pt_alljet_all",0,0,600,600);
   H_pt_alljet_all->SetHighLightColor(2);
   H_pt_alljet_all->Range(37.97653,-257.3328,1705.96,1887.107);
   H_pt_alljet_all->SetFillColor(0);
   H_pt_alljet_all->SetFillStyle(4000);
   H_pt_alljet_all->SetBorderMode(0);
   H_pt_alljet_all->SetBorderSize(2);
   H_pt_alljet_all->SetLeftMargin(0.15709);
   H_pt_alljet_all->SetRightMargin(0.1234783);
   H_pt_alljet_all->SetBottomMargin(0.12);
   H_pt_alljet_all->SetFrameFillStyle(1000);
   H_pt_alljet_all->SetFrameBorderMode(0);
   H_pt_alljet_all->SetFrameFillStyle(1000);
   H_pt_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1672.663);
   
   TH1F *st_stack_184 = new TH1F("st_stack_184","",40,0,2000);
   st_stack_184->SetMinimum(0);
   st_stack_184->SetMaximum(1672.663);
   st_stack_184->SetDirectory(0);
   st_stack_184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_184->SetLineColor(ci);
   st_stack_184->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_184->GetXaxis()->SetRange(7,30);
   st_stack_184->GetXaxis()->SetLabelFont(42);
   st_stack_184->GetXaxis()->SetTitleOffset(1);
   st_stack_184->GetXaxis()->SetTitleFont(42);
   st_stack_184->GetYaxis()->SetTitle("Events/50.0");
   st_stack_184->GetYaxis()->SetLabelFont(42);
   st_stack_184->GetYaxis()->SetTitleSize(0.037);
   st_stack_184->GetYaxis()->SetTitleFont(42);
   st_stack_184->GetZaxis()->SetLabelFont(42);
   st_stack_184->GetZaxis()->SetTitleOffset(1);
   st_stack_184->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_184);
   
   
   TH1D *VbbHcc_alljet_H_pt_all_stack_1 = new TH1D("VbbHcc_alljet_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(1,1115.109);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(2,927.8099);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(3,216.8447);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(4,47.98275);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(5,15.99465);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(6,6.450548);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(7,2.762729);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(8,1.345469);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(9,0.6421795);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(10,0.3170784);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(11,0.1528239);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(12,0.09424527);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(13,0.05036763);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(14,0.0206911);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(15,0.01796844);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(16,0.01440026);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(17,0.006508144);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(18,0.005864499);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(19,0.003691938);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(20,0.004890959);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(25,0.001119176);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(1,1.572778);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(2,1.422639);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(3,0.6764229);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(4,0.31508);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(5,0.1814342);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(6,0.1148904);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(7,0.07501162);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(8,0.05362329);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(9,0.03600007);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(10,0.02501112);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(11,0.0175172);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(12,0.01342267);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(13,0.01018635);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(14,0.006365191);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(15,0.006170005);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(16,0.00460025);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(17,0.00365732);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(18,0.003473905);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(19,0.002652441);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(20,0.0028287);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(25,0.001119176);
   VbbHcc_alljet_H_pt_all_stack_1->SetEntries(1410242);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_pt_all_stack_2 = new TH1D("VbbHcc_alljet_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(1,101.2149);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(2,130.5932);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(3,58.28947);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(4,22.88752);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(5,9.76735);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(6,4.290823);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(7,2.083404);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(8,1.021003);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(9,0.5428712);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(10,0.2744953);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(11,0.1434058);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(12,0.09230861);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(13,0.04301424);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(14,0.03281634);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(15,0.02111207);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(16,0.01261826);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(17,0.007359608);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(18,0.003225142);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(19,0.004372236);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(20,0.002091999);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(21,0.001490283);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(22,0.0006777943);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(23,0.000534751);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(24,0.0001480239);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(25,0.000822985);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(26,0.000215911);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(30,0.0001867829);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(32,1.371525e-05);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(1,0.1723718);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(2,0.1954877);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(3,0.1302524);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(4,0.08135568);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(5,0.05308216);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(6,0.03533138);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(7,0.02503374);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(8,0.01723634);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(9,0.01275394);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(10,0.008946084);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(11,0.00635526);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(12,0.005351117);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(13,0.003512773);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(14,0.003177686);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(15,0.002508165);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(16,0.002009459);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(17,0.001477957);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(18,0.0009435249);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(19,0.001131814);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(20,0.000817374);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(21,0.0006446989);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(22,0.0005114229);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(23,0.0003151165);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(24,0.0001480239);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(25,0.0005629152);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(26,0.000215911);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(30,0.0001867829);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(32,1.371525e-05);
   VbbHcc_alljet_H_pt_all_stack_2->SetEntries(1377680);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_alljet_all->Modified();
   H_pt_alljet_all->cd();
   H_pt_alljet_all->SetSelected(H_pt_alljet_all);
}
