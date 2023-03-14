#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(-1.310117,-31344.77,7.029799,229861.7);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetFillStyle(4000);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(203741);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0);
   st_stack_117->SetMaximum(203741);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_117->GetXaxis()->SetRange(1,30);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Event/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetTitleSize(0.037);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,382.4748);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,154239.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,164077.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,118431.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,76335.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,60168.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,57809.15);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,31107.79);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,21904.25);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,16727.04);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,19578.02);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,19527.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,12976.51);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,7614.542);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,6308.142);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,9075.077);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,23603.46);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,6142.273);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,3706.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,3507.533);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,1661.798);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,425.8099);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,1823.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,348.9349);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,78.44072);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,8.005494);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,46.63875);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,30.99378);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,8.005494);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,280.8788);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,9182.292);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,22101.72);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,8089.792);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,6400.785);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,5699.263);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,5837.485);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,3591.462);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,2431.423);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,2564.699);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,3289.214);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,3537.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,2465.048);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,1728.196);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,1056.372);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,2283.386);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,20493.49);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,2507.185);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,1576.171);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,2026.912);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,624.1754);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,281.3848);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,1446.145);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,279.8062);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,40.15836);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,8.005494);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,32.51422);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,24.34233);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,8.005494);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(22714);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,1.395026);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,1989.239);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,5027.625);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,6302.49);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,6174.566);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,5287.505);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,4218.321);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,3221.32);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,2492.403);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,1943.655);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,1535.412);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,1260.575);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,1054.172);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,908.1462);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,793.3106);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,686.4098);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,446.7405);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,285.6654);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,191.1428);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,123.2557);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,78.08015);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,47.57121);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,31.2312);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,21.23054);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,11.51083);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,7.000009);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,4.019749);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,2.785028);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,1.570283);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,1.306293);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,1.90828);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.3013429);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,11.20473);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,17.84424);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,19.95105);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,19.68647);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,18.16492);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,16.1765);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,14.08827);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,12.37341);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,10.89552);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,9.6672);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,8.749249);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,7.998558);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,7.417474);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,6.929502);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,6.444283);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,5.211019);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,4.163586);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,3.415646);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,2.741493);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,2.177607);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,1.700447);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,1.381443);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,1.14596);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,0.8303599);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,0.6492397);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,0.4965287);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,0.4217752);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.3139527);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.28332);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,0.3389493);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(736178);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}
