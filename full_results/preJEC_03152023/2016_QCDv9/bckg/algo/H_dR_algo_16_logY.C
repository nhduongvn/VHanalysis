#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.353788,-0.208402,7.264125,5.877675);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLogy();
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(103076.6);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",30,0,6);
   st_stack_85->SetMinimum(3.326038);
   st_stack_85->SetMaximum(185809.2);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_85->GetXaxis()->SetRange(1,31);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetTitleOffset(1);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Event/0.2");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetTitleOffset(1);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,58574.61);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,49042.98);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,47683.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,47954.12);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,41506.21);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,48327.19);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,66264.88);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,40255.33);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,56531.97);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,82016.69);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,57890.96);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,57269.14);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,61500.15);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,55445.99);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,31707.68);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,16300.15);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,15212.49);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,7982.597);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,4240.617);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,3214.983);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,2491.333);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,723.4611);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,118.2473);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,30.31401);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,16.34529);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,3.042281);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,5795.551);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,4689.111);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,5724.602);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,6203.378);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,4886.087);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,5493.725);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,20155.63);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,4191.491);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,6409.467);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,23228.32);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,5972.539);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,5540.932);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,5453.364);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,5128.885);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,4034.514);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,1715.762);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,2464.549);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,2012.532);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,961.2361);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,854.021);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,1577.069);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,392.6197);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,47.61012);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,13.02732);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,11.57989);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,3.042281);
   VbbHcc_algo_H_dR_stack_1->SetEntries(22714);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.4530031);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,1079.602);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,2083.269);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,2566.515);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,2858.261);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,2952.617);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,3009.34);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,3078.413);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,3194.656);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,3345.537);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,3536.898);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,3608.646);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,3541.181);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,3372.404);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,3041.071);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,1849.873);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1138.7);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,700.926);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,416.2254);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,236.7819);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,121.0752);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,62.52315);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,28.03275);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,10.24241);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,3.288125);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,0.9130635);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.3045497);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,0.04811475);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.1753763);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,8.416796);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,11.71219);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,13.02803);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,13.80362);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,14.0848);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,14.25869);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,14.44981);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,14.71173);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,15.01483);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,15.43476);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,15.57814);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,15.39177);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,14.99244);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,14.21194);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,11.04722);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,8.6247);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,6.731374);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,5.158633);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,3.869175);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,2.744999);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,1.984868);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.319129);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,0.7903684);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.4352907);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.2195056);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1395459);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,0.04811475);
   VbbHcc_algo_H_dR_stack_2->SetEntries(736178);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
