#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Wed Jan 18 11:40:22 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-0.7217774,7.264125,5.293034);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLeftMargin(0.15709);
   H_dR_tags_all->SetRightMargin(0.1234783);
   H_dR_tags_all->SetBottomMargin(0.12);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.691553);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(4.691553);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,0.5175339);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,1.06354);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,1.323345);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,1.61144);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,1.970777);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,2.040197);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,2.238301);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,2.220956);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,2.250347);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,2.132652);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,2.229591);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,2.331092);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,2.483124);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,2.465635);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,0.9796721);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,0.5178088);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,0.2624567);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,0.1807178);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,0.1129606);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,0.08112775);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,0.04166184);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,0.02456562);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,0.007195303);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,0.01123389);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,0.00361407);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,0.03238982);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,0.04753159);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,0.0537977);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,0.0584604);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,0.06527618);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,0.06674082);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,0.07089955);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,0.06882779);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,0.07037206);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,0.06842154);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,0.06889168);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,0.07030704);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,0.07165244);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,0.07372988);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,0.04738161);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,0.03254091);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,0.02347844);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,0.01851211);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,0.01491789);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,0.01266307);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,0.009078972);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,0.006567952);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,0.003690872);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,0.004273686);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,0.002608774);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(16887);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,0.0001892188);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,0.2101842);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,0.3896627);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,0.5010779);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,0.6966517);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,0.7987208);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,0.8285328);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,0.7356822);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,0.643602);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,0.5688437);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,0.566605);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,0.5408297);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,0.590407);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,0.6445783);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,0.6130935);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,0.3199205);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,0.1874713);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,0.1208163);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,0.06974094);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,0.05078109);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,0.03242896);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,0.02408574);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,0.01404436);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,0.008415967);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,0.003466413);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,0.002125401);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,0.000533292);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,0.0001892188);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,0.007962693);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,0.01067688);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,0.01216548);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,0.01432759);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,0.01551385);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,0.01587692);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,0.01471096);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,0.01388829);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,0.01289294);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,0.01291948);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,0.01259896);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,0.01305218);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,0.0137041);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,0.01329595);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,0.009497595);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,0.007295929);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,0.005873436);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,0.004435244);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,0.003844163);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,0.002997835);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,0.002616733);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,0.002034566);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,0.001461191);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,0.0009602101);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,0.00100614);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,0.0003083126);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(38012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
