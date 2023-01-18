#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Wed Jan 18 11:42:52 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.8559794,7.029799,9.229428);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLogy();
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(7.019006e+07);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",30,0,6);
   st_stack_81->SetMinimum(2.260838);
   st_stack_81->SetMaximum(1.662982e+08);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_81->GetXaxis()->SetRange(1,30);
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetTitleOffset(1);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Events/0.2");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetTitleOffset(1);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,31.52751);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,496512.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,697192.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,565265);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,545136.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,398908.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,501522.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,332607.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,338073.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,251364.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,263347.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,179751.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,269022.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,245831.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,210028.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,105276);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,74443.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,59979.45);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,56211.86);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,15752.27);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,21877.76);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,4687.339);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,2061.864);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,1852.674);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,30.07277);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,15.5964);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,25.47489);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,41154.01);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,57148.97);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,58210.76);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,62515.29);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,48969.89);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,68407.39);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,42861.04);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,52449.57);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,41118.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,44120.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,28586.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,47339.36);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,44639.89);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,43851.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,30509.53);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,25266.56);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,24931.99);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,26103.93);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,4291.893);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,19367.57);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,2190.626);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1690.313);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,1477.794);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,21.9935);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,10.45059);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(33722);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,2.169628);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,2130.943);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,4708.188);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,6287.223);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,7848.299);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,8973.291);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,9506.838);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,9424.328);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,8921.909);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,8071.294);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,7237.168);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,6340.592);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,5601.535);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,5059.548);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,4324.121);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,2035.975);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,1022.898);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,521.6264);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,270.1316);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,133.7798);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,64.4509);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,28.28846);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,12.00876);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,4.37184);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,1.415042);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.3706387);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3789788);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,12.05983);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,17.90708);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,20.71694);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,23.14337);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,24.71846);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,25.4071);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,25.26318);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,24.52992);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,23.2745);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,21.96968);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,20.49017);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,19.18565);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,18.19841);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,16.77526);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,11.50129);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,8.121202);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,5.790384);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,4.12918);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.911382);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.013426);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.319633);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.861357);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.527205);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.3020459);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.155696);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1587706);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
