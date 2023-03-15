#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-41539.17,7.029799,304620.6);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_16->SetBottomMargin(0.12);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(270004.6);
   
   TH1F *st_stack_105 = new TH1F("st_stack_105","",30,0,6);
   st_stack_105->SetMinimum(0);
   st_stack_105->SetMaximum(270004.6);
   st_stack_105->SetDirectory(0);
   st_stack_105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_105->SetLineColor(ci);
   st_stack_105->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_105->GetXaxis()->SetRange(1,30);
   st_stack_105->GetXaxis()->SetLabelFont(42);
   st_stack_105->GetXaxis()->SetTitleOffset(1);
   st_stack_105->GetXaxis()->SetTitleFont(42);
   st_stack_105->GetYaxis()->SetTitle("Event/0.2");
   st_stack_105->GetYaxis()->SetLabelFont(42);
   st_stack_105->GetYaxis()->SetTitleSize(0.037);
   st_stack_105->GetYaxis()->SetTitleFont(42);
   st_stack_105->GetZaxis()->SetLabelFont(42);
   st_stack_105->GetZaxis()->SetTitleOffset(1);
   st_stack_105->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_105);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,90497.27);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,214107.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,188640.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,89403.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,66579.48);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,41875.31);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,52857.46);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,27107.81);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,13487.85);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,7516.028);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,4977.613);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,5005.006);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,5038.218);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,2139.078);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,3036.528);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,2126.189);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,987.0439);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,367.0327);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,303.5576);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,95.98685);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1444.548);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,8.464814);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,30.99378);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,22.98829);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,5000.058);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,9405.388);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,22699.54);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,6939.057);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,6469.598);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,5109.229);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,21100.86);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,4798.249);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,2842.251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,2230.012);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,1672.635);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,2120.168);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2120.56);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,736.7441);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,1549.859);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1472.837);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,483.7793);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,280.0505);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,278.5304);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,42.26915);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1418.743);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,8.01866);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,24.34233);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,22.98829);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(22714);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,3042.038);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,9996.771);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,9985.55);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,7303.557);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,4748.219);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,2973.942);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,1930.904);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,1282.61);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,860.321);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,607.7604);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,419.6642);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,298.5625);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,211.5347);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,151.2763);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,100.0371);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,73.93348);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,52.14517);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,34.42085);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,26.67978);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,17.33883);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,11.09426);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,6.823041);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,4.948701);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,3.184552);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,3.603065);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.482654);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.130311);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.5454842);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.6864213);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.2768509);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.519382);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,13.56272);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,24.67156);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,24.90598);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,21.44716);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,17.33305);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,13.73331);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,11.05406);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,9.00016);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,7.351673);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,6.187825);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,5.13604);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,4.324067);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,3.640905);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,3.076616);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,2.497872);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.156722);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,1.810514);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.459696);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.295885);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.036057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.8340541);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.6557489);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.5558262);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.4454177);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4765759);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3077124);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.2643063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.1848107);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2099681);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.127053);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.1856282);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(736178);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
