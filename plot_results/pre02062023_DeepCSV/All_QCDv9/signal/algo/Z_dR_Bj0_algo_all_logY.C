#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,0.4856403,7.029799,2.795168);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLogy();
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(284.0511);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(5.7914);
   st_stack_116->SetMaximum(366.6189);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.3528104);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,2.013266);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,2.17953);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,1.363457);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,0.7511211);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.3677801);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.1838426);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.09658147);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.06524297);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.04760245);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.03099114);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.01908117);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.009851559);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.004614803);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.003910501);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.001440646);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,0.02549374);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,0.06176905);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,0.06417315);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,0.05084873);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,0.03777236);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,0.02619325);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,0.01858793);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,0.01330675);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,0.01112102);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,0.009548848);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,0.007902541);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,0.005879795);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,0.004510631);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,0.002667039);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,0.002813736);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,0.001440646);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(4145);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.08608216);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,0.635784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,0.6609816);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,0.2796437);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.1192629);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.05527893);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.02630388);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.02036797);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.007850268);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.0040996);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.005107199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.003447274);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.001227237);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.001145757);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.002178159);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.0007042058);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.0009657215);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.0005649097);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,0.00469861);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,0.01309274);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,0.01327579);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,0.00862655);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,0.005688669);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,0.003832783);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,0.00267925);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,0.002372962);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,0.001441175);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,0.000994203);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,0.001128624);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,0.0009932001);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,0.0005598178);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,0.0005298471);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,0.00079751);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,0.0004280818);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,0.0004983222);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,0.0004088644);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(7685);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
