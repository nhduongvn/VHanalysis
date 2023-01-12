#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_all/Z_dR_Bj1_tags_all
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_all = new TCanvas("Z_dR_Bj1_tags_all", "Z_dR_Bj1_tags_all",0,0,600,600);
   Z_dR_Bj1_tags_all->SetHighLightColor(2);
   Z_dR_Bj1_tags_all->Range(-1.310117,-1.606141,7.029799,11.77837);
   Z_dR_Bj1_tags_all->SetFillColor(0);
   Z_dR_Bj1_tags_all->SetFillStyle(4000);
   Z_dR_Bj1_tags_all->SetBorderMode(0);
   Z_dR_Bj1_tags_all->SetBorderSize(2);
   Z_dR_Bj1_tags_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_all->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_all->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(10.43992);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",30,0,6);
   st_stack_56->SetMinimum(0);
   st_stack_56->SetMaximum(10.43992);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_56->GetXaxis()->SetRange(1,30);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetTitleOffset(1);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/0.2");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetTitleSize(0.037);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetTitleOffset(1);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.9494193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(2,3.767665);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(3,5.048045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(4,4.528986);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(5,3.865092);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(6,2.786528);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(7,2.06753);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(8,1.468761);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(9,1.189404);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.9638117);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.7679139);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.6238848);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.5696468);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.5393193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.4818329);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.4083021);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.2390052);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.1389513);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.09014662);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.06447459);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.0412221);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.02022477);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.01376206);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.005497579);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(25,0.008232439);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(26,0.004468371);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(28,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(29,0.003764068);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(30,0.003027725);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(31,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(1,0.04202884);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(2,0.08436835);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(3,0.0979997);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(4,0.0923208);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(5,0.0855884);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(6,0.07269812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(7,0.06234041);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(8,0.05229342);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(9,0.04693817);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(10,0.04245152);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(11,0.03800375);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(12,0.03431915);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(13,0.03254816);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(14,0.03200073);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(15,0.03068818);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(16,0.02765818);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(17,0.02133829);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(18,0.01599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(19,0.01316264);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(20,0.01082193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(21,0.008798963);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(22,0.005924361);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(23,0.005316287);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(24,0.003230469);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(25,0.003760784);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(26,0.002582584);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(28,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(29,0.002733816);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(30,0.002143427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(31,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetEntries(16994);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.4773103);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(2,1.578931);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(3,1.911899);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(4,1.523353);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(5,1.04074);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.6873818);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.4529448);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.3140602);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.2497996);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.1940797);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.1857094);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.1579208);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.1420721);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.1216447);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.1137849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.1003718);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.06792642);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.03939064);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.02471136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.0181172);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.01432514);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(22,0.007146062);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.004633772);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.002210035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.001546569);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(26,0.001629187);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.0007042058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(28,0.000180036);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(29,0.0003600719);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(1,0.01121503);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(2,0.02053289);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(3,0.02259635);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(4,0.02014597);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(5,0.01671101);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(6,0.01349789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(7,0.01098877);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(8,0.009092856);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(9,0.008060799);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(10,0.007163051);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(11,0.006970149);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(12,0.006431811);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(13,0.006088892);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(14,0.005630169);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(15,0.005482599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(16,0.005111196);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(17,0.004225727);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(18,0.00322506);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(19,0.002537202);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(20,0.002255172);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(21,0.001923787);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(22,0.001376129);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(23,0.001132922);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(24,0.0007271986);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0006015753);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(26,0.0006443989);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0004280818);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(28,0.000180036);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(29,0.0002546093);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetEntries(38313);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_1","ZHcc","F");

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
   Z_dR_Bj1_tags_all->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->SetSelected(Z_dR_Bj1_tags_all);
}
