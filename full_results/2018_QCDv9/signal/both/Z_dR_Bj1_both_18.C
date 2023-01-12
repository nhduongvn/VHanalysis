#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
   Z_dR_Bj1_both_18->SetHighLightColor(2);
   Z_dR_Bj1_both_18->Range(-1.310117,-0.8414648,7.029799,6.170742);
   Z_dR_Bj1_both_18->SetFillColor(0);
   Z_dR_Bj1_both_18->SetFillStyle(4000);
   Z_dR_Bj1_both_18->SetBorderMode(0);
   Z_dR_Bj1_both_18->SetBorderSize(2);
   Z_dR_Bj1_both_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_18->SetBottomMargin(0.12);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.469521);
   
   TH1F *st_stack_167 = new TH1F("st_stack_167","",30,0,6);
   st_stack_167->SetMinimum(0);
   st_stack_167->SetMaximum(5.469521);
   st_stack_167->SetDirectory(0);
   st_stack_167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_167->SetLineColor(ci);
   st_stack_167->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_167->GetXaxis()->SetRange(1,30);
   st_stack_167->GetXaxis()->SetLabelFont(42);
   st_stack_167->GetXaxis()->SetTitleOffset(1);
   st_stack_167->GetXaxis()->SetTitleFont(42);
   st_stack_167->GetYaxis()->SetTitle("Events/0.2");
   st_stack_167->GetYaxis()->SetLabelFont(42);
   st_stack_167->GetYaxis()->SetTitleSize(0.037);
   st_stack_167->GetYaxis()->SetTitleFont(42);
   st_stack_167->GetZaxis()->SetLabelFont(42);
   st_stack_167->GetZaxis()->SetTitleOffset(1);
   st_stack_167->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_167);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.4670079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,2.005113);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,2.657995);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,2.279277);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,1.967939);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,1.417288);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,1.013012);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.6970267);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.5599448);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.4855953);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.374071);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.329926);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.3066917);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.2973981);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.2834575);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.1951675);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.1231414);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.07202609);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.05111529);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.02788107);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.02323422);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.006970267);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.009293689);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.004646845);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.002323422);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,0.002323422);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,0.002323422);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.0329402);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.06825485);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.07858527);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.07277172);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.06761917);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.0573843);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.04851448);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.04024285);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.03606921);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.03358933);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.02948092);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.02768677);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.02669409);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.02628652);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.02566304);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.02129452);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.01691477);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.01293627);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.01089782);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.008048571);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.007347306);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.004024285);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.004646845);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.003285815);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.002323422);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,0.002323422);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,0.002323422);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.2587887);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.8383101);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.9883524);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.7791191);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.5554321);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.34964);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.2381406);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.162087);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.1170055);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.1008312);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.09222787);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.08396866);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.06985917);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.06194409);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.05815862);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.05196421);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.03510165);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.02168043);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.01204469);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.01032402);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.007570945);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.003441339);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.003097205);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.0006882677);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0003441339);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,0.001032402);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,0.0003441339);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.009437052);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01698502);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.01844249);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.01637441);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.01382545);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.01096918);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.009052748);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.007468577);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.006345515);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.005890623);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.005633714);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.005375543);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.004903153);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.00461704);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.00447374);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.004228788);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.003475582);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.002731478);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.002035923);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.001884899);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.001614131);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.001088247);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.001032402);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0004866788);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0003441339);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.0005960573);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.0003441339);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(14243);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_both_18->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->SetSelected(Z_dR_Bj1_both_18);
}
