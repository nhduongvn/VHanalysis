#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,-0.08126786,7.029799,0.5959643);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_all->SetBottomMargin(0.12);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.5282411);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",30,0,6);
   st_stack_144->SetMinimum(0);
   st_stack_144->SetMaximum(0.5282411);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_144->GetXaxis()->SetRange(1,30);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetTitleOffset(1);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Event/0.2");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetTitleSize(0.037);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetTitleOffset(1);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,0.07178525);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,0.2455022);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,0.3406261);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,0.2933945);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,0.152735);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,0.1081034);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,0.09332779);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,0.04698813);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,0.05223517);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,0.0579077);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,0.03565636);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,0.03246211);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,0.02201507);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,0.01499856);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,0.005436264);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,0.01090628);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,0.008171272);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,0.006131775);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,0.003856013);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,0.0125584);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,0.0225421);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,0.02721469);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,0.02512505);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,0.01794421);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,0.01529981);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,0.01424127);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,0.01005605);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,0.01068476);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,0.01116774);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,0.008858666);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,0.008288217);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,0.006772126);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,0.005761165);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,0.003189589);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,0.005013383);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,0.004201636);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,0.00358544);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,0.002770611);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(781);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,0.01745285);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,0.07601936);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,0.09781404);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,0.09953154);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,0.06104023);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,0.04014122);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,0.03064161);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,0.01834122);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,0.01521653);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,0.01701509);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,0.01762567);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,0.009084671);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,0.009188333);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,0.01022535);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,0.005671265);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,0.004230927);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,0.002778024);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,0.002120765);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,0.001222131);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,0.001498284);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,0.001429736);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,0.0007148681);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,0.002226639);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,0.004539824);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,0.005255772);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,0.005292993);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,0.004152121);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,0.003325859);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,0.002939563);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,0.002255856);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,0.002074599);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,0.002216307);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,0.00225199);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,0.001575651);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,0.001558827);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,0.001698026);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,0.001291162);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,0.001084753);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,0.0008920226);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,0.0008108974);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,0.0005557776);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,0.000670053);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,0.0005932865);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,0.0004195169);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(2012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
