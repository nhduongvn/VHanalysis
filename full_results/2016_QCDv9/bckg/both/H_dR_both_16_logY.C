#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.353788,-0.4096592,7.264125,6.879088);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15709);
   H_dR_both_16->SetRightMargin(0.1234783);
   H_dR_both_16->SetBottomMargin(0.12);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(716976.3);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(2.917364);
   st_stack_149->SetMaximum(1413233);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_149->GetXaxis()->SetRange(1,31);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetTitleOffset(1);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Event/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetTitleSize(0.037);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetTitleOffset(1);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,85.70302);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,278981.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,269017.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,208293);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,207978.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,202669.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,208534.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,236421.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,232012.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,280470.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,328949.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,346883.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,377258.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,476850.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,518548.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,311053.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,235499.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,179114);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,144282.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,137375.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,120490.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,60602.62);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,47198.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,24012.34);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,11362.24);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,6450.701);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,3101.93);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,11.10776);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,42.35744);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,10854.19);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,10246.59);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,9605.303);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,10576.61);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,9765.432);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,9295.914);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,21703.37);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,9591.254);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,23874.44);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,24977.26);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,12392.48);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,12429.41);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,26221.53);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,27541.42);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,12108.67);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,10225.95);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,8671.635);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,7904.319);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,28087.34);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,24312.59);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,4996.67);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,4321.671);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,3489.979);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,2002.032);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,1130.191);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,1552.865);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,7.833943);
   VbbHcc_both_H_dR_stack_1->SetEntries(256983);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,18.96476);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,19463.28);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,33986.59);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,39590.78);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,42206.01);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,40459.45);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,37838.15);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,37037.97);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,38896.39);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,43385.24);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,49920.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,57775.43);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,66545.66);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,74992.54);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,76541.45);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,44141.33);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,28045.26);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,18739.54);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,12610.82);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,8487.809);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,5556.526);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,3515.743);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2151.817);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1160.297);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,579.8999);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,238.9496);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,63.85647);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,5.310609);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.134766);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,36.73897);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,48.51186);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,52.30135);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,53.93325);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,52.80818);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,51.11881);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,50.62493);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,51.96961);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,54.95414);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,59.01424);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,63.59191);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,68.33596);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,72.64231);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,73.43862);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,55.60277);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,44.16085);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,35.94992);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,29.33255);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,23.93592);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,19.27129);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,15.22865);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,11.83619);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,8.649735);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,6.057123);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,3.863299);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,1.961148);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.5605709);
   VbbHcc_both_H_dR_stack_2->SetEntries(1.206718e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
