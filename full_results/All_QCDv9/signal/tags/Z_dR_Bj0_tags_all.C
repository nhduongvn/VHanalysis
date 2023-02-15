#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_all/Z_dR_Bj0_tags_all
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_all = new TCanvas("Z_dR_Bj0_tags_all", "Z_dR_Bj0_tags_all",0,0,600,600);
   Z_dR_Bj0_tags_all->SetHighLightColor(2);
   Z_dR_Bj0_tags_all->Range(-1.310117,-2.576854,7.029799,18.89693);
   Z_dR_Bj0_tags_all->SetFillColor(0);
   Z_dR_Bj0_tags_all->SetFillStyle(4000);
   Z_dR_Bj0_tags_all->SetBorderMode(0);
   Z_dR_Bj0_tags_all->SetBorderSize(2);
   Z_dR_Bj0_tags_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_all->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(16.74955);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",30,0,6);
   st_stack_52->SetMinimum(0);
   st_stack_52->SetMaximum(16.74955);
   st_stack_52->SetDirectory(0);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_52->GetXaxis()->SetRange(1,30);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetTitleOffset(1);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/0.2");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetTitleSize(0.037);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetTitleOffset(1);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(1,1.988267);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(2,7.427547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(3,8.098553);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(4,6.959897);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(5,5.196979);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(6,3.814018);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(7,2.754938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(8,2.036746);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(9,1.702137);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(10,1.216834);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.9946632);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.8802521);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.8132812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.7012604);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.6995064);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.6339193);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.3587851);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.2037949);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(19,0.1444552);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(20,0.07867394);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(21,0.04205815);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(22,0.02860609);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(23,0.01221651);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(24,0.01430305);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(25,0.01360754);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(27,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(29,0.00659102);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(31,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(1,0.06546034);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(2,0.1259725);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(3,0.1318032);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(4,0.1221129);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(5,0.1056398);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(6,0.09035137);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(7,0.07648144);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(8,0.06624675);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(9,0.06039889);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(10,0.05138702);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(11,0.04618588);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(12,0.04344563);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(13,0.04207847);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(14,0.03885688);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(15,0.03886005);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(16,0.03729176);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(17,0.02790744);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(18,0.02061187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(19,0.01775506);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(20,0.01261358);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(21,0.009823397);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(22,0.007811418);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(23,0.00473956);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(24,0.005523506);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(25,0.005275152);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(27,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(28,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(29,0.003893142);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(31,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetEntries(22839);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.8043259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(2,3.033309);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(3,3.067813);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(4,2.198024);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(5,1.390016);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.8346333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.5734976);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.4375196);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.3404188);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.2873396);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.2499023);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.2156092);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.1992965);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.1837243);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.1720053);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.1665572);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.08889423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.05208205);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.03268261);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(20,0.02010533);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.01535491);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(22,0.01099817);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(23,0.00653613);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(24,0.004714349);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.001913495);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(26,0.001371791);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.0005648715);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(1,0.01505358);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(2,0.02925488);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(3,0.02941768);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(4,0.02483886);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(5,0.01979372);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(6,0.01534212);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(7,0.01276688);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(8,0.01110075);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(9,0.009795314);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(10,0.008958476);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(11,0.00841331);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(12,0.007781496);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(13,0.007463058);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(14,0.007148222);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(15,0.007007316);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(16,0.006847142);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(17,0.004970831);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(18,0.003848762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(19,0.002998982);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(20,0.002384971);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(21,0.002099678);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(22,0.001737196);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(23,0.00135954);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(24,0.001199648);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(25,0.000731554);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(26,0.000627238);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(27,0.0004132058);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(28,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(29,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetEntries(53399);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_all->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->SetSelected(Z_dR_Bj0_tags_all);
}
