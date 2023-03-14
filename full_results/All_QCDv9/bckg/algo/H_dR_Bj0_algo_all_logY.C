#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-0.4516554,7.029799,7.093024);
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
   st->SetMaximum(1086343);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",30,0,6);
   st_stack_108->SetMinimum(2.842537);
   st_stack_108->SetMaximum(2180501);
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
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,326110.4);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,859233.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,718040.4);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,488943.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,311508.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,204984);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,161920.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,88583.52);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,69948.65);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,64401.42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,22316.81);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,22073.15);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,17140.89);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,11902.89);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,15730.85);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,8047.692);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,6601.945);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,17297.12);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,2495.744);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,250.0875);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,3272.709);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,394.5464);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,21.36296);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(24,103.713);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,53.35754);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,251.1178);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(30,1188.975);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,8866.977);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,24190.53);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,35374.06);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,44067.79);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,29904.74);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,18970.91);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,31549.34);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,8382.463);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,22743.15);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,22780.16);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,3988.303);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,4520.974);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,3993.59);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,3374.344);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,4211.158);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,2718.142);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,2610.228);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,14668.79);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,1793.054);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,69.36708);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,2243.306);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,343.7522);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,21.36296);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(24,46.88866);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,38.08875);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,251.1178);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(30,1188.975);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(72705);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,12834.65);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,42431.93);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,42869.63);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,31634.65);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,20400.58);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,12777.19);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,8170.117);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,5394.737);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,3633.203);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,2509.834);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,1740.242);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,1229.553);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,868.2059);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,609.8832);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,417.0346);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,299.6879);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,210.3998);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,142.6536);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,97.17401);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,70.98776);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,44.4927);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,28.83197);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,21.94577);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,15.36496);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,10.89343);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,6.762625);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,4.559586);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,2.033767);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,2.049529);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,1.226497);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,3.140389);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,27.63407);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,50.46917);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,51.30604);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,44.39459);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,35.76029);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,28.30994);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,22.62425);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,18.36721);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,15.05034);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,12.49791);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,10.39948);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,8.734288);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,7.34326);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,6.143691);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,5.084713);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,4.307154);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,3.617253);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,2.968658);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,2.453798);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,2.091618);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,1.660481);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,1.3337);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,1.166215);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,0.9770194);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,0.8222278);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.6446805);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.5376253);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.3555915);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.3629953);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.2799832);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.4477445);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(3202080);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
