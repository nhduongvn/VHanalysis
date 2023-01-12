#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Mon Dec 19 11:11:45 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-4088741,7.029799,2.99841e+07);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.657682e+07);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0);
   st_stack_20->SetMaximum(2.657682e+07);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(2,7649.68);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,1.350043e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,1.657317e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,1.255674e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,1.114428e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,1.005278e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,1.002915e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,9601644);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,1.055066e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,1.015687e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,1.102669e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,1.257612e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,1.359185e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,1.543624e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,1.673721e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,1.010899e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,6671139);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,4753376);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,3257800);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,2273649);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,1493096);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,1173649);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,659475.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,410150);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,175906.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,82361.76);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,30192.75);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,1646.982);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(2,2185.909);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,265925.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,317703.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,285132.2);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,278081.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,264612.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,280473.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,274351.2);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,310591.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,296599.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,304428.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,338592.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,350791.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,387564.5);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,399287.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,303438);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,248770.2);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,216372.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,175987.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,137739.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,113252.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,107865.2);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,81586.13);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,68305.84);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,32463.67);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,23184.02);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,17760.88);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,1418.335);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(1674378);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,90.62505);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,134235.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,264389.5);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,316452.6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,386187.4);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,452058.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,514599.4);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,576514.3);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,640128.3);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,707867.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,780483.1);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,857133.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,932674.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,1000656);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,980667.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,516572.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,294673.5);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,174974.1);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,103396.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,59840.89);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,33658.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,18159.59);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,9284.979);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,4361.856);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,1826.933);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,632.9606);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,149.0273);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,7.254632);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,2.674121);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,106.4552);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,149.5065);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,163.3904);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,181.0727);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,195.5917);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,208.8225);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,220.7443);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,232.7085);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,245.0456);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,257.1219);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,269.4532);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,281.6758);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,292.1391);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,289.2274);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,210.2021);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,158.6567);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,122.1126);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,94.04337);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,71.61186);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,53.73656);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,39.52971);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,27.62864);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,18.95282);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,12.74842);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,7.223182);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,4.210625);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,0.7222225);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(1.351921e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
