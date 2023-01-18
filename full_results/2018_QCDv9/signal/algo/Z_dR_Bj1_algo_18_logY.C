#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(-1.310117,0.6221231,7.029799,2.272245);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetLogy();
   Z_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(106.2092);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(6.609031);
   st_stack_119->SetMaximum(128.0068);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_119->GetXaxis()->SetRange(1,30);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.2");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetTitleSize(0.037);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.1998143);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.6064132);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.8108744);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.6598519);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.4600376);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.253253);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.1417288);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.06040898);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.04414502);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.03717476);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.01858738);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.01858738);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.02788107);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.01161711);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,0.01394053);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.002323422);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.006970267);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,0.009293689);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,0.002323422);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,0.002323422);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.02154653);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.03753604);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.04340511);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.03915501);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.03269345);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.02425724);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.01814651);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.01184718);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.01012756);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.009293689);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.006571631);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.006571631);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.008048571);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.00519533);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,0.005691199);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.002323422);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.004024285);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,0.004646845);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,0.002323422);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,0.002323422);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.04129606);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.1999418);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.2512177);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.1589898);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.07846252);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.043705);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.02615417);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.01307709);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.01273295);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.004129606);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.006882677);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.005162008);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.007915079);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.001376535);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.004129606);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.001032402);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.001032402);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.001032402);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,0.0006882677);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.003769798);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.008294982);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.009297985);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.007396877);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.005196307);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.003878192);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.003000089);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.002121384);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.002093285);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.001192115);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.001539013);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.001332825);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.001650408);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0006882677);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.001192115);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0005960573);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0005960573);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.0005960573);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,0.0004866788);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(2500);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
