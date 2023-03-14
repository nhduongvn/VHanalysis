#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-3.348864,7.029799,0.4972894);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetLogy();
   H_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_all->SetBottomMargin(0.12);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",30,0,6);
   st_stack_108->SetMinimum(16.81402);
   st_stack_108->SetMaximum(1.296206);
   st_stack_108->SetDirectory(0);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_108->GetXaxis()->SetRange(1,30);
   st_stack_108->GetXaxis()->SetLabelFont(42);
   st_stack_108->GetXaxis()->SetTitleOffset(1);
   st_stack_108->GetXaxis()->SetTitleFont(42);
   st_stack_108->GetYaxis()->SetTitle("Event/0.2");
   st_stack_108->GetYaxis()->SetLabelFont(42);
   st_stack_108->GetYaxis()->SetTitleSize(0.037);
   st_stack_108->GetYaxis()->SetTitleFont(42);
   st_stack_108->GetZaxis()->SetLabelFont(42);
   st_stack_108->GetZaxis()->SetTitleOffset(1);
   st_stack_108->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_108);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,0.3413276);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,1.144953);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,0.9294292);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,0.5281543);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,0.1985618);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,0.09071644);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,0.03564856);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,0.01818571);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,0.00984367);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,0.01255365);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,0.01189128);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,0.001703784);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,0.002047605);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,0.001703784);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,0.02341541);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,0.04281559);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,0.03859475);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,0.0293811);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,0.01796221);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,0.01187469);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,0.007267528);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,0.005348678);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,0.003782506);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,0.004289115);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,0.004301167);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,0.001703784);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,0.002047605);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,0.001703784);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,0.07789704);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,0.4020228);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,0.3533191);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,0.1675528);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,0.05332111);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,0.02638256);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,0.01339454);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,0.008596624);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,0.00405673);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,0.003909492);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,0.002028491);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,0.001208225);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,0.001027012);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,0.0006472424);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,0.0006041125);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,0.0001554272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,0.0001554272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,0.0001554272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,0.0003797699);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,0.004086102);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,0.009180015);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,0.008620489);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,0.005957411);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,0.003326154);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,0.002378562);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,0.001686263);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,0.001305872);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,0.0009097834);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,0.0009147102);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,0.0006258065);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,0.0004996336);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,0.0004695914);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,0.0003821372);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,0.0003532943);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,0.0001554272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,0.0001554272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,0.0001554272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,0.0002729235);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","ZHcc","F");

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
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
