#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Tue Feb 14 16:10:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-3060909,7.264125,2.244666e+07);
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
   st->SetMaximum(1.989591e+07);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(1.989591e+07);
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
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(2,22754);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,6092480);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,7153806);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,5519816);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,5617810);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,5729176);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,5482785);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,6297463);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,6550371);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,7594351);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,8418744);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,8927365);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,1.072418e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,1.149181e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,1.246226e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,8484574);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,6038648);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,4925301);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,3845421);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,3053659);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,2097961);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,1727685);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,1067989);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,736549.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,478931);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,168923.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,57576.41);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,4873.32);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(2,19641.84);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,172961.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,193230.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,163245.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,182396.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,196140.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,165805);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,204667.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,189766);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,242401.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,244637.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,222671.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,260854.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,253915.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,274388.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,231941.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,181366.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,176699.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,153292.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,142680.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,104922.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,113194);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,84669.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,71206.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,76425.05);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,28999.02);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,19119.64);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,2091.76);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(1446641);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,161.1238);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,193192.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,344241.9);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,418171.8);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,501829.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,547337.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,563031.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,568522.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,580522.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,606535.8);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,646579.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,697742.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,754969);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,810685.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,801680.9);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,459126.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,293707.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,197980.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,134663.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,90529.29);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,59695.22);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,38037.91);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,22937.49);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,12368.63);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,6075.408);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,2506.563);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,679.6592);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,46.09265);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,5.233532);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,127.2819);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,168.8883);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,186.5617);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,203.5279);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,212.6626);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,216.7534);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,217.2715);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,220.273);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,224.7735);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,232.0366);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,241.5221);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,251.3509);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,260.3384);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,259.1961);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,196.0721);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,156.6946);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,127.9537);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,104.8701);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,85.06628);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,69.6187);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,54.97098);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,42.62919);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,30.69456);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,21.98309);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,13.73553);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,7.613642);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,1.804302);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(1.308968e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
