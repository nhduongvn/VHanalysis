#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Mon Mar 20 11:48:31 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-0.2039659,7.264125,1.49575);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.325778);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(0);
   st_stack_120->SetMaximum(1.325778);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_120->GetXaxis()->SetRange(1,31);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Event/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetTitleSize(0.037);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,0.1302922);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,0.3554753);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,0.5977553);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,0.8174037);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,0.677016);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,0.5884004);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,0.4896052);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,0.2783013);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,0.1824515);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,0.1337068);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,0.1332949);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,0.1157868);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,0.07289708);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,0.08307017);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,0.04332591);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,0.02077219);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,0.006641077);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,0.001955239);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,0.001245676);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,0.01810129);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,0.03074169);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,0.03910517);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,0.05978442);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,0.04146303);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,0.03870093);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,0.03535623);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,0.0266645);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,0.02099092);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,0.0180877);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,0.01803208);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,0.01702595);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,0.01270865);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,0.01443868);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,0.01017404);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,0.007537825);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,0.003910448);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,0.001955239);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,0.001245676);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,0.02713897);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,0.08847474);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,0.1769245);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,0.2829924);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,0.3165909);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,0.2578765);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,0.1613958);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,0.08602159);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,0.05473584);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,0.04561722);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,0.0376904);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,0.02987524);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,0.03196274);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,0.02740543);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,0.01502044);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,0.008007214);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,0.004982888);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,0.003681277);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,0.0009334347);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,0.001232516);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,0.0002650135);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,0.002915553);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,0.005290774);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,0.007509138);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,0.01001038);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,0.010944);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,0.009102245);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,0.007234396);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,0.005354526);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,0.004171617);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,0.003836331);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,0.003490262);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,0.003068468);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,0.003202499);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,0.002962927);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,0.002188735);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,0.001702139);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,0.001279459);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,0.001141153);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,0.0005656276);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,0.0006308914);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,0.0002650135);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
